## If you wish to use extra libraries (math.h for instance),
### add their flags here (-lm in our case) in the "LIBS" variable.

###
.POSIX:

CFLAGS  = -std=c99
CFLAGS += -g
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -pedantic
CFLAGS += -Werror
CFLAGS += -Wmissing-declarations

ASANFLAGS  = -fsanitize=address
ASANFLAGS += -fno-common
ASANFLAGS += -fno-omit-frame-pointer

OBJ = consoleconnectfour.o connectfour.o

.SUFFIXES:
.SUFFIXES: .c .o

consoleconnectfour: $(OBJ)
	@echo Linking
	$(CC) $(CFLAGS) -o $@ $(OBJ)
	@echo Cleaning
	make clean

.c.o:
	@echo Compiling $@
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf *.o
