#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Book{
    private: 
    int Bookid;
    string Bookname;
    float Bookprice;

    public:
    Book(int id, string name, float price){
        Bookid = id;
        Bookname = name;
        Bookprice = price;
    }
    string getBookname(){
        return Bookname;
    }
    float getBookprice(){
        return Bookprice;
    }
};
void compareBookprice(Book b1 , Book b2){
    if(b1.getBookprice()>b2.getBookprice()){
        cout << left << setw(10) << "Expansive --> " << setw(10) << b1.getBookname() <<endl;
        cout << left << setw(10) << "Price --> " << setw(10) << b1.getBookprice() << endl; 
    }
    else{
        cout << left << setw(10) << "Expensive --> " << setw(10) << b2.getBookname() <<endl;
        cout << right << setw(500) << "Price  --> " << setw(10) << b2.getBookprice() << endl;
    }
}
int main(){

    Book book1(101 , "Harry Potter" , 549.4);
    Book book2(102 , "Game of Thrones" , 430.67);

    compareBookprice(book1 , book2);

    return 0;
}
