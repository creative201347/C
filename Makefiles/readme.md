# Makefiles | C Programming

**Makefiles** are simple text files that tell how a particular program should be built from a set of dependencies.\
gcc -o complex main.c complex_numbers.c

## Linking

This recompiles only the flies that are changed and do not compile the files which are up to date.

```
complex: main.o complex_numbers.o
	gcc -o complex main.o complex_numbers.o

main.o: main.c complex_numbers.h
	gcc -o main.o -c main.c

complex_numbers.o: complex_numbers.c complex_numbers.h
	gcc -o complex_numbers.o -c complex_numbers.c

clean:
	rm -f complex main.o complex_numbers.o
```

## Variables

`-I.` **Include path**

```
CC = gcc
CPPFLAGS = -I.
OBJECT_FILES = main.o complex_numbers.o
RM = rm -f

complex: $(OBJECT_FILES)
	$(CC) -o complex $(OBJECT_FILES) $(CPPFLAGS)

main.o: main.c complex_numbers.h
    $(CC) -o main.o -c main.c $(CPPFLAGS)

complex_numbers.o: complex_numbers.c complex_numbers.h
    $(CC) -o complex_numbers.o -c complex_numbers.c $(CPPFLAGS)

clean:
	$(RM) complex $(OBJECT_FILES)
```

## Implicit Rules

There are set of rules which are already defined in make command, so we don't have to defined them explicitly. \
So, `$gcc -o main.o -c main.c` is rudundent, because Makefile automatically generates .o file from .c file `i.e implicit rule`

```
CC = gcc
CPPFLAGS = -I.
OBJECT_FILES = main.o complex_numbers.o
RM = rm -f

complex: $(OBJECT_FILES)
	$(CC) -o complex $(OBJECT_FILES) $(CPPFLAGS)

main.o: complex_numbers.h

complex_numbers.o: complex_numbers.h

clean:
	$(RM) complex $(OBJECT_FILES)
```
