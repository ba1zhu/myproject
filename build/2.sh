cd ..
make
cd ModuleA
make
cd ..
ar -rsv release/libstu.a ModuleA/stu.o ModuleB/cla.o main.o
gcc -o main main.c -I./include -L./release/ -lstu
