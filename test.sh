cd build/lab1/main
echo normal
./lab1 --first 11 --second 12
echo normal
./lab1 --second 1 --first 12
echo 1st defined but not pass
./lab1 --first --second 1233
./lab1 --second 12444
./lab1 --first
./lab1 --help

cd ../libfts/
./fts_test
