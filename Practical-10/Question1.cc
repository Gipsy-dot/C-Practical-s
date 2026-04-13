#include <iostream>
#include <string>
using namespace std;

class SkillAnalyzer{

    protected:

    int programmingSkill;
    int communicationSkill;

    public:

    void input(){

        cout<<"Enter your Programming Skill: "<<endl;
        cin>>programmingSkill;

        if(programmingSkill < 0 || programmingSkill > 100){
            cout<<"Invaild input!"<<endl;
            programmingSkill=0;
        }

        cout<<"Enter your Communication skill: "<<endl;
        cin>>communicationSkill;

        if(communicationSkill<0 || communicationSkill>100){
            cout<<"Invalid input!"<<endl;
            communicationSkill=0;
        }
    }

    float returncalculateScore(){
        float Sscore;

        Sscore = (programmingSkill+communicationSkill) / 2.0;

        cout<<"Skill Score: "<<" "<<Sscore<<endl;
        return Sscore;
    }
};

class ProjectEvaluator{

    protected:

    int projectCount;
    int QualityScore;

    public:

    void input(){

        cout<<"Enter your Project Count: "<<endl;
        cin>>projectCount;

        cout<<"Enter your Project Quality Score: "<<endl;
        cin>>QualityScore;

        if(QualityScore<0 || QualityScore>100){
            cout<<"Invalid Input!"<<endl;
            QualityScore=0;
        }
    }

     float returncalculateProjectScore(){

        float Pscore;

        Pscore = (projectCount+QualityScore)/2.0;
        cout<<"Project Score: "<<" "<<Pscore<<endl;

        return Pscore;
    }
};

class CandidateRanking:public SkillAnalyzer , public ProjectEvaluator{

    private:

    float finalScore;
    string rank;

    public: 

    void evaluateCandidate(){

        finalScore= (returncalculateScore()+returncalculateProjectScore())/2.0;

        if(finalScore>=80){
            rank="Excellent";
        }
        else if(finalScore>=60 || finalScore <= 79){
            rank="Good";
        }
        else{
            rank="Average";
        }
    }

    void display(){

        cout<<"Final Score is: "<<"|| "<<finalScore<<" ||"<<endl;
        cout<<"Final Rank is: "<<"|| "<<rank<<" ||"<<endl;
    }
};

int main(){

    CandidateRanking cr;

    cr.SkillAnalyzer::input();
    cr.returncalculateScore();
    cr.ProjectEvaluator::input();
    cr.returncalculateProjectScore();
    cr.evaluateCandidate();
    cr.display();

    return 0;
}
