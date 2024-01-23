# -*- MakeFile -*-
CC=gcc
Ar=ar
OBJECT_MAIN=main.O
main.O=main.c

FLAGS= -Wall -g

all: libclassesloops.a libclassrec.a libclassesloops.so libclassrec.so mains maindloop maindrec
