all: linked_list.c headers.h
	gcc linked_list.c -o linked_list_test

run: all
	./linked_list_test
