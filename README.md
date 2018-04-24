# Calculator
VUT FIT IVS project 2 - Calculator
Team: ShatteredButWhole

**Platforms** <br />
_Windows 64-bit_  
_Ubuntu 64-bit_  

### Prerequisites
* [make](https://www.gnu.org/software/make/)
* [CMake](https://cmake.org/)
##### _Additional prerequisites for Ubuntu_
* [Qt5](http://doc.qt.io/qt-5/linux.html)
* sudo apt-get install qtbase5-dev
* sudo apt-get install qtdeclarative5-dev

## Getting Started
Use this commands for top-level Makefile (for Windows see additional informations !):  
```make all``` - install the application <br />
```make uninstall``` - unistall the application <br />
```make clean``` - remove unwanted files. Ready for deployment <br />
```make package``` - create package for distribution <br />
```make test``` - run tests of mathematical library <br />
```make pack``` - zip the whole directory  
```make run``` - start the Calculator application <br />
```make doc``` - create doxygen documentation
```make install_prerequisities``` - install required prerequisities <br />

### Additional informations
[CMake](https://cmake.org/) minimal version 2.8.11 required.
We **don't** recommend using top-level Makefile for _Windows_, because of different generators used by CMake.
Used generators for package:
* _for windows_ - *ZIP, NSIS, PackageMaker* 
* _for linux_ -   *ZIP, TGZ*

## Authors
* **Juraj Lahvička** 	xlahvi00 - (https://github.com/hahaSK)
* **Tomáš Sašák** 	xsasak01
* **Lubomír Švehla** 	xsvehl09
* **Martin Krajčí** 	xkrajc21

## License

This project is licensed under the GNU GPL License - see the [LICENSE.md](LICENSE.md) file for details 
	
 
