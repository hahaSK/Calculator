CHDIR_TO_SRC=cd ./src/

all:
	$(CHDIR_TO_SRC) && cmake . && make install

uninstall:	
	$(CHDIR_TO_SRC) && make uninstall && rm -r _CPack_Packages 

install_prerequisities:
ifeq ($(OS), Windows_NT)
	@echo "These prerequisities are not valid for Windows"
else
	sudo apt-get install cmake build-essential libgl1-mesa-dev qtdeclarative5-dev
endif

clean:
ifeq (,$(wildcard ./src/install_manifest.txt))
	$(CHDIR_TO_SRC) && make clean && make deployclean
else
	$(CHDIR_TO_SRC) && make uninstall && make deployclean
endif

package:
ifeq (,$(wildcard ./src/install_manifest.txt))
	$(CHDIR_TO_SRC) && make package
else
	$(CHDIR_TO_SRC) && make uninstall && make package
endif

test:
ifeq (,$(wildcard ./src/bin/runTests))
	@echo "ERROR: runTests binary does not exist.\nPlease build the binary using \"make all\" command."
else
	$(CHDIR_TO_SRC)bin/ && ./runTests
endif

run:
ifeq (,$(wildcard ./src/bin/Calculator))
	@echo "ERROR: Calculator binary does not exist.\nPlease build the binary using \"make all\" command."
else
	$(CHDIR_TO_SRC)bin/ && ./Calculator
endif

pack:
ifeq ($(OS), Windows_NT)
	@echo "You need to pack manually on Windows"
else
	cp -r ./src/install ../install && cd .. && zip -r xlahvi00_xsvehl09_xsasak01_xkrajc21.zip Calculator doc install
endif
	
doc: 
ifeq ($(OS), Windows_NT)
	@echo "Doxygen is not supported on Windows"
else
	$(CHDIR_TO_SRC) && doxygen Doxyfile
endif
