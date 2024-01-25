# -*- MakeFile -*-
CC=gcc
FLAGS= -Wall -g

all: loops recursives recursived loopd mains maindloop maindrec all clean

loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

mains: main.o MyMathFun.o basicClassification.o libclassrec.so libclassloops.so
	$(CC) -o mains main.o MyMathFun.o basicClassification.o -L/home/mor/CLionProjects/untitled/  -lclassloops -lclassrec

maindloop: main.o libclassloops.so MyMathFun.o basicClassification.o
	$(CC) -o maindloop main.o MyMathFun.o basicClassification.o -L/home/mor/CLionProjects/untitled/ -lclassloops

maindrec: main.o libclassrec.so MyMathFun.o basicClassification.o
	$(CC) -o maindrec main.o MyMathFun.o basicClassification.o -L/home/mor/CLionProjects/untitled/  -lclassrec

clean:
	rm -f *.o *.a *.so mains maindloop maindrec


libclassloops.a: loop.o 
	ar rcu $@ loop.o
	ranlib libclassloops.a

libclassrec.a: recursive.o 
	ar rcu $@ recursive.o 
	ranlib libclassrec.a

libclassrec.so:	recursive.o 
	$(CC) -shared -o $@ recursive.o 

libclassloops.so: loop.o 
	$(CC) -shared -o $@ loop.o 

main.o:	main.c advencedClassificationRecursion.h advencedClassificationLoop.h MyMathFun.h basicClassification.h NumClass.h
	$(CC) -c -o $@ main.c
loop.o: advencedClassificationLoop.o
	$(CC) -c -o $@ advencedClassificationLoop.o
recursive.o: advencedClassificationRecursion.o 
	$(CC) -c -o $@ advencedClassificationRecursion.o
advencedClassificationRecursion.o: advencedClassificationRecursion.c advencedClassificationRecursion.h MyMathFun.h basicClassification.h NumClass.h
	$(CC) -c advencedClassificationRecursion.c
advencedClassificationLoop.o: advencedClassificationLoop.c advencedClassificationLoop.h MyMathFun.h basicClassification.h NumClass.h
	$(CC) -c advencedClassificationLoop.c

MyMathFun.o: MyMathFun.c MyMathFun.h
	$(CC) -c -o $@ MyMathFun.c

basicClassification.o: basicClassification.c basicClassification.h
	$(CC) -c -o $@ basicClassification.c

