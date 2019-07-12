all : linkedLists strings

linkedLists:
	cd src/linkedLists && $(MAKE)

strings:
	cd src/strings && $(MAKE)
