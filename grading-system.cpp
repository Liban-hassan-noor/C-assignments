// Grading system 
#include <iostream>
using namespace std;
int main() {
 int subject1,subject2,subject3;
 int averagescore;
 
 cout <<"enter scores for subject 1: ";
 cin >> subject1;
 
  cout <<"enter scores for subject 2: ";
  cin >> subject2;
 
  cout <<"enter scores for subject 3: ";
  cin >> subject3;
  
  //calculating average score
  averagescore=(subject1+subject2+subject3) / 3;
  
  cout<<"average score = " <<averagescore <<endl;
  
  //switch case 
  switch(averagescore/10){
      case 10:
      case 9:
      case 8:
      case 7:
            cout<<"Grade = A " <<endl;
            break;
      case 6:
            cout<<"Grade = B " <<endl;
             break;
      case 5:
            cout<<"Grade = C " <<endl;
             break;
      case 4:
            cout<<"Grade = D " <<endl;
             break;
        default:
            cout<<"grade= failed" <<endl;
      
  }
 
 
 
    return 0;
}