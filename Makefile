# compiler to use
CC = clang

# compiler flags
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS = -g -Wall

# get all source files
SOURCEFILES = $(shell find . -type f -name "*.c")
# Convert all of these files to have .o as their suffix with a substitution
OUTPUTFILES = ${SOURCEFILES:.c=.o}

# Our "PHONY" rules; all make targets correspond with a produced file 
# (This is how it can be clever about knowing when it can skip rules
# if no files have changed.  We never make a file called "all" or "clean"
# as these are rules for our convenience - aka PHONY rules.)
.PHONY: all clean

# Build all our output files (.o files)
all: ${OUTPUTFILES}

# Remove all our output files
clean:
	rm -v ${OUTPUTFILES}

#$@:
#	$(CC) $@.c -o $@.out

# The rule that tells us how to make a .o file from a .c file.
$.o: %.c
	$(CC) $(CFLAGS) -o $@ $^

# the command *must* be indented by a *single* tab character, not spaces!
# unfortunately this editor does not make it easy to write tabs
# to see tab character use cat -t file