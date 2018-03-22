//================ShatteredButWhole================
//            IVS project 2 - runTests
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  standard_deviation.h created: 2018-Mar-15
//=================================================

#ifndef STANDARD_DEVIATION_H
#define STANDARD_DEVIATION_H


/**
 * Reads and parses sequence of numbers divided by ";"
 * @param numberSequence - array containing sequence of numbers
 * @return returns number of values entered and filled numberSequence array
 */
int getArray(double numberSequence[]);

/**
 * Find the average value in array of numbers
 * @param numberSequence - array containing sequence of numbers
 * @return - returns the average value in array of numbers
 */
double getAverage(double *numberSequence, int size);

/**
 * Compute standard deviation of numbers in array
 * @param numberSequence - array containing sequence of numbers
 * @return - returns the standard deviation
 */
double standardDeviation(double *numberSequence, int size);


#endif //STANDARD_DEVIATION_H
