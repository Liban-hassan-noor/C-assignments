#include <iostream>
using namespace std;

int main() {
    
    float radius, volume;
    
    
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    
   
    volume = (4.0 / 3.0) * (22.0 / 7.0) * (radius * radius * radius);
    
    
    cout << "The volume of the sphere is: " << volume << endl;
    
    return 0;
}
