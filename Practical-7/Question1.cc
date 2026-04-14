#include <iostream>
#include <string>
using namespace std;

class Player {

    public: 
     string Playername;
     int Playerscore[5];

     void input(){

        cout <<"Enter Player name here: "<<endl;
        cin >>Playername;

        cout <<"Enter Player's score here:  "<<endl;
       
        for(int i = 0 ; i < 5 ;i++){
            cin >>Playerscore[i];
        }
     }
     int totalscore(){

        int sum = 0;
        for(int i = 0 ; i<5 ; i++){

            sum = sum + Playerscore[i];
        }
        return sum;
     }
     float average(){

        return totalscore()/5.0;
     }
};

int main(){

    Player p[2];

    for(int i = 0 ; i<2 ; i++){
        cout<<"Enter PLayer Detail here: "<<i+1<<endl;
        p[i].input();
    }
    int highest = 0 ;
    string highestplayer;

    for(int i ; i<2 ; i++){

        int total = p[i].totalscore();

        if(total > highest){
            highest = total;
            highestplayer = p[i].Playername;
        }
    }
    cout<<"\nAverage Score of Each Player\n";
    for(int i=0;i<3;i++){
        cout<<p[i].Playername<<" : "<<p[i].average()<<endl;
    }

    cout<<"\nHighest Scorer: "<<highestplayer<<" with score "<<highest<<endl;

    return 0;

}
