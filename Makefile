INSTALL=install
INCLUDE=include
BIN=bin
SRC=src

all : createProject linkedLists strings tree

linkedLists:
	cd src/linkedLists && $(MAKE)

strings:
	cd src/strings && $(MAKE)

tree:
	cd src/tree && $(MAKE)

clean:
	cd src/linkedLists && $(MAKE) clean
	cd src/strings && $(MAKE) clean
	cd src/tree && $(MAKE) clean

createProject:
	mkdir -p $(INSTALL) $(INCLUDE) $(BIN)
