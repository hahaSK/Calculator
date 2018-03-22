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
 * @return returns filled numberSequence array
 */
void getArray(std::vector<double> &numberSequence);

/**
 * Find the average value in array of numbers
 * @param numberSequence - array containing sequence of numbers
 * @return - returns the average value in array of numbers
 */
double getAverage(std::vector<double> &numberSequence);

/**
 * Compute standard deviation of numbers in array
 * @param numberSequence - array containing sequence of numbers
 * @return - returns the standard deviation
 */
double standardDeviation(std::vector<double> &numberSequence);


#endif //STANDARD_DEVIATION_H
