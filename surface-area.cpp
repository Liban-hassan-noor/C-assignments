#include <iostream>
using namespace std;

class Cylinder {
    public:
        double pi = 3.14;
     double radius,height;
    
    double surfacearea(){
       return ( 2 * pi * radius * radius ) *(2 * pi * radius * height); 
        
    };
    
    double volume(){
       return pi * radius * height;
        
    };
    
    
     
};

int main() {
  Cylinder c1;
  
  c1.radius = 7 ;
  c1.height = 21;
  
  cout<< "the volume of cylinder is: "  <<c1.surfacearea()<<endl;
  cout<< "the volume of cylinder is: "  <<c1.volume()<<endl;
  

    return 0;
}