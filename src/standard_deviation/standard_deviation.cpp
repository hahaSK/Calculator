//================ShatteredButWhole================
//            IVS project 2 - runTests
//  Authors: Juraj Lahvička <xlahvi00@vutbr.cz>
//           Lubomír Švehla <xsvehl09@stud.fit.vutbr.cz>
//           Tomáš Sasák    <xsasak01@stud.fit.vutbr.cz>
//           Martin Krajčí  <xkrajc21@stud.fit.vutbr.cz>
//
//  stdandard_deviation.cpp created: 2018-Mar-15
//=================================================

double getAverage(double *numberSequence)
{
  double result=0.;
  int counter=0;

  for (counter=0; numberSequence[counter]; counter++)
  {
    result = scitanie(result, numberSequence[counter]);
  }
  return divide(result,counter);
}

double standardDeviation(double *numberSequence)
{
  double result=0., averageValue, sumContent;
  int counter=0;

  averageValue = getAverage(numberSequence);
  for (counter=0; numberSequence[counter]; counter++)
  {
    sumContent = substract(power(numberSequence[counter], 2), power(averageValue, 2));
    result = scitanie(result, sumContent);
  }
  result = divide(result,counter-1);
  return squareRoot(result);
}