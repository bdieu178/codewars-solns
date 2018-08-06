//
// In your class, you have started lessons about arithmetic progression. Since you are also a programmer, you have decided to write a function that will return the first n elements of the sequence with the given common difference d and first element a. Note that the difference may be zero!
// 
// The result should be a string of numbers, separated by comma and space.
//
// Example
// # first element: 1, difference: 2, how many: 5
// arithmetic_sequence_elements(1, 2, 5) == "1, 3, 5, 7, 9"
//
//


#include <string>
#include <vector>
using namespace std;

//helper function
vector<int> compute_sequence(int& _a, int& _r, int& _n)
{
  vector<int> sequence(_n,0);
  for( unsigned int i = 0; i < sequence.size(); ++i){
    if( sequence[0] == 0 ){ sequence[i] = _a; continue;}
    sequence[i] = ( sequence[(i-1)] + _r );
  }
  return sequence;
}

string arithmeticSequenceElements(int a, int r, int n)
{
  //helper function that returns a vector of a sequenc=
  compute_sequence(a,r,n);
  string tmp = "";
  for(unsigned int i=0; i < compute_sequence(a,r,n).size() ; ++i){
    string element = to_string(compute_sequence(a,r,n)[i]);
    tmp.append( (element + ", " ) );
  }
  tmp.erase(tmp.size() - 1, 1); //erase escape character
  tmp.erase(tmp.size() - 1, 1); //erase comma
  return tmp;
}
