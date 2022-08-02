all: test_1
test_1: test_1.c
	gcc test_1.c -o $@
clean:
	rm -f test_1 Makefile~ *.o *.c~ *.txt~ a.out
