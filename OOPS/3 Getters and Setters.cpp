#include <iostream>
using namespace std;

class Car{
private:
    int price;
public:
    int model_no;
    char name[20];

    void start(){
        cout << "Grrrr......starting the car "<< name << endl;
    }

    void setPrice(int P){
        if(P>1000){
            price = P;
        }
        else{
            price = 1000;
        }
    }

    int getPrice(){
        return price;
    }
};
int main() {
    Car C;
    C.setPrice(-500);
    C.model_no = 15143;
    C.name[0] = 'B';
    C.name[1] = 'M';
    C.name[2] = 'W';
    C.name[3] = '\0';

    C.start();

    cout << C.getPrice() << endl;
    cout << C.name << endl;

    Car D;
    D.setPrice(2500);
    cout<<D.getPrice()<<endl;
}
