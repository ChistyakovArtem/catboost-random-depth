#!/bin/bash
set -e

CATBOOST_ROOT="/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost"
BUILD_DIR="./build_cpu"
ABS_BUILD_DIR="$CATBOOST_ROOT/build_cpu"
SO_DIR="$ABS_BUILD_DIR/catboost/python-package/catboost"
PYTHON_PKG="$CATBOOST_ROOT/catboost/python-package"
ZIPS_OUT="/home/artem/Articles_and_Projects/gbdt_with_variable_learners/zips"

# Variant name: ./pack_zip.sh catboost_full_hp
VARIANT="${1:-catboost_custom}"

mkdir -p "$ZIPS_OUT"

# ─────────────────────────────────────────────
# 0. PYTHON VERSION CHECK
# ─────────────────────────────────────────────
PY_VERSION=$(python3 --version 2>&1)
echo "==> Python: $PY_VERSION"
if [[ "$PY_VERSION" != *"3.12"* ]]; then
    echo "❌ Python 3.12 required! Activate with: pyenv global 3.12.12"
    exit 1
fi

# ─────────────────────────────────────────────
# 1. BUILD
# ─────────────────────────────────────────────
echo ""
echo "══════════════════════════════════════════"
echo " BUILD: $VARIANT"
echo "══════════════════════════════════════════"

cd "$CATBOOST_ROOT"
echo "==> Working dir: $(pwd)"

echo "==> Building _catboost and catboost CLI..."
python3 build/build_native.py \
    --build-root-dir="$BUILD_DIR" \
    --targets _catboost,catboost

echo "==> Creating symlink _catboost.so -> lib_catboost.so"
ln -sf "$SO_DIR/lib_catboost.so" \
       "$SO_DIR/_catboost.so"

echo "==> Copying _catboost.so to python-package sources..."
cp "$SO_DIR/lib_catboost.so" \
   "$PYTHON_PKG/catboost/_catboost.so"

echo ""
echo "✅ Build complete!"
echo "   CLI : $ABS_BUILD_DIR/catboost/app/catboost"
echo "   .so : $SO_DIR/_catboost.so"

# ─────────────────────────────────────────────
# 2. PACK
# ─────────────────────────────────────────────
OUT_ZIP="$ZIPS_OUT/${VARIANT}.zip"

echo ""
echo "══════════════════════════════════════════"
echo " PACK: $VARIANT"
echo "══════════════════════════════════════════"

echo "==> Packing $CATBOOST_ROOT -> $OUT_ZIP"
echo "    (excluding .git and build_cpu)"

cd "$(dirname "$CATBOOST_ROOT")"  # catboost_change/
zip -r "$OUT_ZIP" "catboost/" \
    --exclude "catboost/.git/*" \
    --exclude "catboost/.git" \
    --exclude "catboost/build_cpu/*" \
    --exclude "catboost/build_cpu"

echo ""
echo "✅ Done!"
echo "   ZIP : $OUT_ZIP"
echo "   Size: $(du -sh "$OUT_ZIP" | cut -f1)"
echo ""
echo "To use on Colab/Kaggle:"
echo "   import zipfile, sys, os"
echo "   with zipfile.ZipFile('${VARIANT}.zip') as z:"
echo "       z.extractall('/content/${VARIANT}')"
echo "   sys.path.insert(0, '/content/${VARIANT}/catboost/catboost/python-package')"