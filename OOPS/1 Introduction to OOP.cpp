/* 
   Class - Blueprint of the entity & it is not created

   eg:- class car {
       int price;
       int model_no;
       string name;
   }

   object is created when we initialize object,
   car A;

*/


#include <iostream>
using namespace std;

class car{
public:
    int price;
    int model_no;
    char name[20];

};
int main() {
    car A;
    cout<<sizeof(A)<<endl;//A is an actual object 28 bytes
    cout<<sizeof(car)<<endl;//class is just a piece of code and size is 28bytes because whenever we will create object of type car

    return 0;
}
