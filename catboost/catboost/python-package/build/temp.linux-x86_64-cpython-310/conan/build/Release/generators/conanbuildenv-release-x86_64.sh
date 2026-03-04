script_folder="/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/conan/build/Release/generators"
echo "echo Restoring environment" > "$script_folder/deactivate_conanbuildenv-release-x86_64.sh"
for v in PATH SWIG_LIB LD_LIBRARY_PATH DYLD_LIBRARY_PATH
do
   is_defined="true"
   value=$(printenv $v) || is_defined="" || true
   if [ -n "$value" ] || [ -n "$is_defined" ]
   then
       echo export "$v='$value'" >> "$script_folder/deactivate_conanbuildenv-release-x86_64.sh"
   else
       echo unset $v >> "$script_folder/deactivate_conanbuildenv-release-x86_64.sh"
   fi
done

export PATH="/home/artem/.conan2/p/yasmb8dcdca877f70/p/bin:/home/artem/.conan2/p/swigfcd151cf14d77/p/bin:/home/artem/.conan2/p/ragel306f10c7d3d21/p/bin:$PATH"
export SWIG_LIB="/home/artem/.conan2/p/swigfcd151cf14d77/p/bin/swiglib"
export LD_LIBRARY_PATH="/home/artem/.conan2/p/swigfcd151cf14d77/p/lib:$LD_LIBRARY_PATH"
export DYLD_LIBRARY_PATH="/home/artem/.conan2/p/swigfcd151cf14d77/p/lib:$DYLD_LIBRARY_PATH"