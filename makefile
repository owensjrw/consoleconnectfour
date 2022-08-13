## If you wish to use extra libraries (math.h for instance),
### add their flags here (-lm in our case) in the "LIBS" variable.

###

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

.PHONY: cc4
cc4: consoleconnectfour.o
	@./consoleconnectfour.o
	@echo "Console Connect Four Successfully Compiled."

.PHONY: memcc4
memcc4: ./*.c ./*.h
	@echo Compiling $@
	@$(CC) $(ASANFLAGS) $(CFLAGS) ./*.c -o mem_consoleconnectfour.o $(LIBS)
	@./mem_consoleconnectfour.o
	@echo "Memory check passed"

.PHONY: clean
clean:
	rm -rf *.o

consoleconnectfour.o: ./*.c ./*.h
	@echo Compiling $@
	@$(CC) $(CFLAGS) ./*.c -o consoleconnectfour.o $(LIBS)
