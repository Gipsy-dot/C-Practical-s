#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Mobile{
    private: 
    string BrandName;
    int Ram;
    float Price;

    public:
    Mobile(string name, int r, float pri){
        BrandName = name;
        Ram = r;
        Price = pri;
    }

    Mobile(const Mobile & other){
        BrandName = other.BrandName;  
        Ram = other.Ram;
        Price = other.Price;
    }

    void display(){
        cout << left << setw(20) << "Brand Name-->" << BrandName << endl;
        cout << left  << setw(20) << "Ram-->" << Ram << endl;
        cout << left  << setw(20) << "Price-->" << Price << endl;
     }
};
int main(){

    Mobile m1("Rishu" , 300 , 30000 );
    Mobile m2 = m1;

    cout << "----Show Mobile [1] Detail----" << endl;
    m1.display();

    cout << "----Show Mobile [2] Detail----" << endl;
    m2.display();

    return 0;

}