#include <vector>

using namespace std; 

unsigned long long minValue (vector <int> values)
{
    vector<int> tmp;
    vector<int>::iterator itr, o_itr, b_itr, t_itr;
    for (itr = values.begin(); itr != values.end(); ++itr){
        o_itr = itr;
        if ( *itr < *(++o_itr) )  tmp.push_back((*itr));
        //break out of loop once o_itr is past the last element
        if ( *o_itr == 0)  break; 
        //cout << *itr << endl;
      }
    for (itr = values.end(); itr != values.begin(); --itr){
        o_itr = itr;
        if ( (*itr < *(--o_itr)) && (  )  tmp.push_back((*itr));
        //break out of loop once o_itr is past the last element
        if ( *o_itr == 0)  break; 
        //cout << *itr << endl;
      }
    for (t_itr = tmp.begin(); t_itr != tmp.end(); ++t_itr){
      cout << *t_itr << endl;
    }
 return 0; 
}
