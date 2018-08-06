/*

Task
Given a Divisor and a Bound , Find the largest integer N , Such That ,

Conditions :
N is divisible by divisor

N is less than or equal to bound

N is greater than 0.

Notes
The parameters (divisor, bound) passed to the function are only positve values .
It's guaranteed that a divisor is Found .

*/

#include <iostream> 
#include <cstdlib>
using namespace std;

int maxMultiple(int divisor, int bound) 
{
  //will need to generate a random set of  
  //numbers that is below the bound,and 
  //iterates from the top to down

  //check the upperbound first
  if ( 0 == (bound%divisor)) return bound;
  int multiple = 0;
  /* generate a random number set
  that is divisible by divisor and
  less than bound */ 
  
  return multiple;
}


int main(){
  cout << maxMultiple(2,80) << endl;
  return 0;
}