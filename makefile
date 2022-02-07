all: rm build run

build:  livrariaFuturo
	gcc main.c  livrariaFuturo.o livro.o -o main

livrariaFuturo: livro
	gcc -c livrariaFuturo.c

livro:	
	gcc -c livro.c

clear:
	cls
	
rm: rmo rmain

run: clear
	main.exe

rmo:
	del *.o
	
rmain:
	del main.exe