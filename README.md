# Calculator
VUT FIT IVS project 2 - Calculator
Team: ShatteredButWhole

*Platforms Windows 64-bit, Linux*

### Prerequisites
* [make](https://www.gnu.org/software/make/)
* [CMake](https://cmake.org/)
##### _Additional prerequisites for linux_
* [Qt](http://doc.qt.io/qt-5/linux.html)

## Getting Started
Use this commands for top-level Makefile (for Windows see additional informations !):
```make all``` - install the application
```make uninstall``` - unistall the application
```make clean``` - remove unwanted files. Ready for deployment
```make package``` - create package for distribution 
```make test``` - run tests of mathematical library
```make pack``` - zip the whole directory
```make run``` - start the Calculator application
```make doc``` - create doxygen documentation

### Additional informations
[CMake](https://cmake.org/) minimal version 2.8.11 required.
We **don't** recommend using top-level Makefile for _Windows_, because of different generators used by CMake.
Used generators for package:
* _for windows_ - *ZIP, NSIS, PackageMaker* 
* _for linux_ -   *ZIP, TGZ*

## Authors
**Juraj Lahvička** 	xlahvi00 - (https://github.com/hahaSK)
**Tomáš Sašák** 	xsasak01
**Lubomír Švehla** 	xsvehl09
**Martin Krajčí** 	xkrajc21
	
 
