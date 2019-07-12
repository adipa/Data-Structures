INSTALL=install
INCLUDE=include
BIN=bin
SRC=src

all : createProject linkedLists strings

linkedLists:
	cd src/linkedLists && $(MAKE)

strings:
	cd src/strings && $(MAKE)

clean:
	cd src/linkedLists && $(MAKE) clean
	cd src/strings && $(MAKE) clean

createProject:
	mkdir -p $(INSTALL) $(INCLUDE) $(BIN)
