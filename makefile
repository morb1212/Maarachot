CC=gcc
CFLAGS= -Wall -g

all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

mains: main.o MyMathFun.o basicClassification.o libclassrec.so libclassloops.so
	$(CC) -o mains main.o MyMathFun.o basicClassification.o -L. -lclassloops -lclassrec

maindloop: main.o libclassloops.so MyMathFun.o basicClassification.o
	$(CC) -o maindloop main.o MyMathFun.o basicClassification.o -L. -lclassloops

maindrec: main.o libclassrec.so MyMathFun.o basicClassification.o
	$(CC) -o maindrec main.o MyMathFun.o basicClassification.o -L. -lclassrec

.PHONY: clean all

clean:
	rm -f *.o mains maindloop maindrec libclassrec.so libclassloops.so

libclassloops.a: loop.o MyMathFun.o
	ar rcs $@ loop.o MyMathFun.o
	ranlib $@

libclassrec.a: recursive.o MyMathFun.o
	ar rcs $@ recursive.o MyMathFun.o
	ranlib $@

libclassrec.so: recursive.o MyMathFun.o
	$(CC) -shared -o $@ recursive.o MyMathFun.o

libclassloops.so: loop.o MyMathFun.o
	$(CC) -shared -o $@ loop.o MyMathFun.o

main.o: main.c advencedClassificationRecursion.h advencedClassificationLoop.h MyMathFun.h basicClassification.h NumClass.h
	$(CC) -c -o $@ main.c $(CFLAGS)

loop.o: advencedClassificationLoop.c advencedClassificationLoop.h MyMathFun.h basicClassification.h NumClass.h
	$(CC) -c -o $@ advencedClassificationLoop.c $(CFLAGS)

recursive.o: advencedClassificationRecursion.c advencedClassificationRecursion.h MyMathFun.h basicClassification.h NumClass.h
	$(CC) -c -o $@ advencedClassificationRecursion.c $(CFLAGS)

advencedClassificationRecursion.o: advencedClassificationRecursion.c advencedClassificationRecursion.h MyMathFun.h basicClassification.h NumClass.h
	$(CC) -c -o $@ advencedClassificationRecursion.c $(CFLAGS)

advencedClassificationLoop.o: advencedClassificationLoop.c advencedClassificationLoop.h MyMathFun.h basicClassification.h NumClass.h
	$(CC) -c -o $@ advencedClassificationLoop.c $(CFLAGS)
