#!/bin/bash
set -e

CATBOOST_ROOT="/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost"
BUILD_DIR="./build_cpu"

cd "$CATBOOST_ROOT"
echo "==> Working dir: $(pwd)"

echo "==> Building _catboost and catboost CLI..."
python3 build/build_native.py \
    --build-root-dir="$BUILD_DIR" \
    --targets _catboost,catboost

SO_DIR="$BUILD_DIR/catboost/python-package/catboost"
echo "==> Creating symlink _catboost.so -> lib_catboost.so"
ln -sf "$CATBOOST_ROOT/$SO_DIR/lib_catboost.so" \
       "$CATBOOST_ROOT/$SO_DIR/_catboost.so"
       
echo "==> Copying _catboost.so to python-package sources..."
cp "$CATBOOST_ROOT/$SO_DIR/lib_catboost.so" \
   "$CATBOOST_ROOT/catboost/python-package/catboost/_catboost.so"
echo ""
echo "==> Done!"
echo "    CLI : $CATBOOST_ROOT/$BUILD_DIR/catboost/app/catboost"
echo "    .so : $CATBOOST_ROOT/$SO_DIR/_catboost.so"
