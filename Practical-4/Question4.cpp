#include <iostream>
using namespace std;
class Login {

    private:
    string username;
    int password;

    public:
    void setdetail(string user , int pass){
        username = user;
        password = pass;
    }
    void checklogin(){
        int chec;
        string check;

        cout<<"Enter username here: "<<endl;
        cin>>check;
        cout<<"Enter Password here: "<<endl;
        cin>>chec;

         if(check == username && chec == password){
            cout<<"login Successfull!";
        }
        else{
            cout<<"Login Falied!";
        }
    }
};
int main(){
    Login user;

    user.setdetail("rishu" , 611);
    user.checklogin();

    return 0;
}