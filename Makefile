
CHDIR_TO_SRC=cd ./src/
	

all:
	$(CHDIR_TO_SRC)&& cmake .&& make install

uninstall:	
	$(CHDIR_TO_SRC); make uninstall 

clean:
	$(CHDIR_TO_SRC) && make uninstall && make deployclean

pack:
	$(CHDIR_TO_SRC); make package

runTests:
	$(CHDIR_TO_SRC)bin/; ./runTests

run:
	$(CHDIR_TO_SRC)bin/; ./Calculator

