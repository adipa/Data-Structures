all : linkedLists strings

linkedLists:
	cd src/linkedLists && $(MAKE)

strings:
	cd src/strings && $(MAKE)

clean:
	cd src/linkedLists && $(MAKE) clean
	cd src/strings && $(MAKE) clean
