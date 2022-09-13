CC=clang
CFLAGS=-Wall -g
BINS= linked_list.o liblinked_list.a linked_list_test
all: $(BINS)

linked_list.o: linked_list.h liblinked_list.c
	$(CC) $(CFLAGS) -c liblinked_list.c

liblinked_list.a: liblinked_list.o
	ar -cvq liblinked_list.a liblinked_list.o

linked_list_test: linked_list_test.c liblinked_list.a
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.a *.o linked_list_test 
