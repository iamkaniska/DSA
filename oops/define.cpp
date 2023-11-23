#include<iostream>

using namespace std;
class hero
{
    public:
    int health;
    char grade;
    int level;
    
};
int main(){
    //creation of an object
    hero kaniska;
    kaniska.health = 20;
    kaniska.grade = 'A';
    cout<<sizeof(kaniska);
    cout<<endl;
    cout<<kaniska.health<<" ";
    cout<<kaniska.grade<<" ";


}