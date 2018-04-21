define checkIfMakefileExists
	ifneq ("$(wildcard ./src/Makefile)","")	
		$(CHDIR_TO_SRC); cmake .
	endif 
endef

define checkIfTestsExists
	ifneq ("$(wildcard ./src/bin/runTests*)","")
		$(call checkIfMakefileExists); make
	endif 
endef

CHDIR_TO_SRC=cd ./src/
#$(call checkIfMakefileExists)
#$(call checkIfTestsExists)
	

all:
	$(CHDIR_TO_SRC); cmake .; make

install:
	$(CHDIR_TO_SRC); make install 

uninstall:	
	$(CHDIR_TO_SRC); make uninstall 

clean:
	$(CHDIR_TO_SRC); make clean

pack:
	$(CHDIR_TO_SRC); make package

test:
	$(CHDIR_TO_SRC); make test

runTests:
	$(CHDIR_TO_SRC)bin/; ./runTests

