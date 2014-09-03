CC       = clang
CFLAGS  += -O0 -g -std=c99 -lm

CLIP    ?= gpaste

all: main

clip:
	cat main.c | ${CLIP}

clean:
	-rm ${BIN}

.PHONY: all clean clip
