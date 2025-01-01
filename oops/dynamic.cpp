#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }

    
};
int main(){
    Cricketer c("virat kohli",25000,51.9);
    cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
    //now write the same using dynamic men=mory allocation
    Cricketer *c1=new Cricketer("sachin tendulker",40000,70.89);
    cout<<(*c1).name<<" "<<(*c1).runs<<" "<<(*c1).avg<<endl;

    //we can write also this way using dynamic allocation, we use it further when we use linklist
    cout<<c1->name<<" "<<c1->runs<<" "<<c1->avg<<endl;



}