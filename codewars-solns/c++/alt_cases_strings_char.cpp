//
//  Define a function for alternatiing cases : " altERnaTIng cAsE <=> ALTerNAtiNG CaSe"
//
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string to_alternating_case(const string& str){ 
  string *p = new string; 
  *p = str;
  //Iterate through each character in the string
  for (int i = 0; i < (*p).size(); ++i){
     if( (bool)isupper( (*p)[i] ) )    { (*p)[i] = tolower ( (*p)[i] );  }
     else if ( (bool)islower((*p)[i])) { (*p)[i] = toupper ( (*p)[i] );  }
  }
  return *p;
}
