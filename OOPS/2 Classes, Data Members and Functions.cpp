#include <iostream>
using namespace std;

class car{
public:
    int price;
    int model_no;
    char name[20];

    void start(){
        cout<<"Grrrrr.....starting the car "<<name<<endl;
    }
};

int main() {
    car C;
    C.price = 4000000;
    C.model_no = 1112233;
    C.name[0] = 'B';
    C.name[1] = 'M';
    C.name[2] = 'W';
    C.name[3] = '\0';

    C.start();


}
