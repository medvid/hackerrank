CC       = clang
CFLAGS  += -O0 -g -std=c99 -lm -Wall -Wextra -Wno-unused-parameter

CLIP    ?= gpaste

all: main

clip:
	cat main.c | ${CLIP}

clean:
	-rm ${BIN}

.PHONY: all clean clip
