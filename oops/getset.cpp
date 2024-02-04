#include<iostream>

using namespace std;
class hero
{
    private:
    int health;
    char grade;
    int level;
    public:
    int getHealth(){
        return health;
    }
    char getGrade(){
        return grade;
    }
    void setHealth(int h){
        health=h;
    }
    void setGrade(int grade){
        this->grade=grade;
    }
    
};
int main(){
    //creation of an object
    hero kaniska;

    kaniska.setGrade('A');
    kaniska.setHealth(50);
    // cout<<kaniska.grade;
    cout<<kaniska.getHealth()<<" ";
    cout<<kaniska.getGrade()<<" ";
}



