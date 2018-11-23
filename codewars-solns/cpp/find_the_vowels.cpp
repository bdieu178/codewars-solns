/*
We want to know the index of the vowels in a given word, 
for example, there are two vowels in the word super (the second and fourth letters).
So given a string "super", we should return a list of [2, 4].

Some examples:
Mmmm  => []
Super => [2,4]
Apple => [1,5]
YoMama -> [1,2,4,6]
*/

/*
Practice using associative containers
TODO: Need to explain why I'm using the containers
in this implementation
*/
#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

vector<int> vowelIndices(std::string word)
{
  // Process each letter in word into a map 
  map<int, char> letters; int counter = 0;
  for(auto w_itr = word.begin(); w_itr != word.end(); ++w_itr){
    if((bool)isupper((*w_itr))) (*w_itr) = tolower((*w_itr));
    letters[ (++counter) ] = *w_itr; 
  }
  //Compare each letter element with the set of vowels
  vector<int> indexes; set<char> vowels { 'a', 'e', 'i', 'o', 'u', 'y' };
  for (auto ltr = letters.begin(); ltr != letters.end(); ++ltr ) {
    auto search = vowels.find( (ltr->second) );
    if (search != vowels.end()) { indexes.push_back( (ltr->first)) ; }
  }
  sort(indexes.begin(),indexes.end());
  return indexes;
} 

int main(){
    auto i = vowelIndices("Potentially Fradulent Accounts");
    for(auto v = i.begin(); v != i.end(); ++v ){ cout << *v << endl;}
    return 0;
}
