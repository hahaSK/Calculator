
CHDIR_TO_SRC=cd ./src/

all:
	$(CHDIR_TO_SRC) && cmake . && make install

uninstall:	
	$(CHDIR_TO_SRC) && make uninstall && rm -r _CPack_Packages 

clean:
ifeq (,$(wildcard ./src/install_manifest.txt))
	$(CHDIR_TO_SRC) && make uninstall && make deployclean
else
	$(CHDIR_TO_SRC) && make clean && make deployclean
endif

package:
ifeq (,$(wildcard ./src/install_manifest.txt))
	$(CHDIR_TO_SRC) && make uninstall && make package
else
	$(CHDIR_TO_SRC) && make package
endif

test:
ifeq (,$(wildcard ./runTests))
	@echo "ERROR: runTests binary does not exist.\nPlease build the binary using \"make all\" command."
else
	$(CHDIR_TO_SRC)bin/ && ./runTests
endif

run:
ifeq (,$(wildcard ./Calculator))
	@echo "ERROR: Calculator binary does not exist.\nPlease build the binary using \"make all\" command."
else
	$(CHDIR_TO_SRC)bin/ && ./Calculator
endif

pack:
	cd .. && zip -r Calculator/Calculator.zip Calculator
	
doc: 
	$(CHDIR_TO_SRC) && doxygen Doxyfile