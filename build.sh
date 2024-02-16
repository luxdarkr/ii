SOURCE_DIR=../lab1
BUILD_DIR=build
rm -rf $BUILD_DIR
mkdir $BUILD_DIR
cd $BUILD_DIR
cmake -DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/g++ $SOURCE_DIR
cmake --build .
cd $SOURCE_DIR
find . -path "./**/external/*" -prune -iname *.hpp -o -iname *.cpp  | xargs clang-format -style=file --Werror --dry-run


