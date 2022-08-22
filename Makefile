CC = gcc

BUILD = build
EXEC = $(BUILD)/emulator

SRC= BUILD=$(BUILD) EXEC=$(EXEC)

all: src

.PHONY: src

src:
	$(MAKE) -C src all $(SRC)

# Builder will call this to install the application before running.
install: src
	echo "Installing is not supported"

# Builder uses this target to run your application.
run: src
	chmod +x $(EXEC)
	$(EXEC)

clean:
	$(MAKE) -C src clean $(SRC)
