#include <vector>

class GpsSpeed
{
public:
    //CONSTRUCTORS
    GpsSpeed() : s(0), x(1,0.0)  {}; 
    //GpsSpeed( int _secs, std::vector<double> _vel ): s(_secs), x(_vel) {};
    //ACCESSORS, MODIFIERS, & MISC.
    static int gps(int& secs, std::vector<double>& vel);
private:  
    //REPRESENTATION
    int s;
    std::vector<double> x;
};

int GpsSpeed::gps(int& secs, std::vector<double>& vel) {
    float delta; 
    std::vector<double> tmp;
    
    for (unsigned int i = 0; i < vel.size() ; ++i) {
      if ( vel[i] == vel[0] ) { delta = vel[i+1] - vel[i]; continue;  }
      delta = vel[i+1] - vel[i];
      tmp.push_back( ((3600*delta)/secs) )   
      
    
};
