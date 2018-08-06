/*
We want to know the index of the vowels in a given word, 
for example, there are two vowels in the word super (the second and fourth letters).
So given a string "super", we should return a list of [2, 4].

Some examples:
Mmmm  => []
Super => [2,4]
Apple => [1,5]
YoMama -> [1,2,6]
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

//find indexes of the vowels in the word
vector<int> vowelIndices(std::string word)
{
  //split the string into individual 
  //characters then map into an associative container
  //labeling each character in string with a number starting from 1
  map<char, int> letters;
  int counter = 0;
  for( auto w_itr = word.begin(); w_itr != word.end(); ++w_itr){
    if((bool)isupper((*w_itr))) (*w_itr) = tolower((*w_itr));
    letters[ (*w_itr) ] = ++counter; 
  }
  //define set of vowels to look for
  //then compare each character 
  //in the associative map to the vowels sets
  vector<int> indexes;
  set<char> vowels { 'a', 'e', 'i', 'o', 'u', 'y' };
  for (auto& vowel: vowels){
    auto target = letters.find(vowel);
    if ( vowel == (target->first)) indexes.push_back((target->second));
  }
  sort(indexes.begin(),indexes.end());
  return indexes;
} 

int main(){
    auto i = vowelIndices("YoMama");
    for(auto v = i.begin(); v != i.end(); ++v ){
        cout << *v << endl;
    }
    return 0;
}