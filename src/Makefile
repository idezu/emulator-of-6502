BUILD_DIR=../$(BUILD)
SRCS := $(wildcard *.c)
OBJS := $(patsubst %.c, $(BUILD_DIR)/%.o, $(SRCS))
EXEC_PATH = ../$(EXEC)
INSTALL = installck
SOURCES = sourcesck

INCLUDE_FLAGS=-I../include

WARNINGS = -Wall
DEBUG = -ggdb -fno-omit-frame-pointer
OPTIMIZE = -O2
COMPILE_TIME = -pipe
CFLAGS = $(WARNING) $(DEBUG) $(OPTIMIZE) $(COMPILE_TIME)


all: $(EXEC_PATH) link

$(BUILD_DIR)/%.o: %.c
	$(CC) $(INCLUDE_FLAGS) $< -c -o $@

$(EXEC_PATH): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ -lc

clean:
	rm $(OBJS) $(EXEC_PATH)
