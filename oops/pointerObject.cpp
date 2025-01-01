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
    // void print(int runs){
    //     cout<<name<<" "<<this->runs<<" "<<avg<<endl;
    // }
};
void change(Cricketer* p){
    // (*p).avg=72.91;
    // p->avg=72.91; //both are same (*p).avg = 72.91;
}
int main(){
    Cricketer c("virat kohli",25000,51.9);
    Cricketer c1("rohit sharma",20000,55.9);
    // cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
    // c.print(3);
    Cricketer *p=&c; //pointer
    // cout<<(*p).runs<<endl; //this is how pointer print here
    cout<<p->runs<<endl;
    // (*p).runs=26000;
    p->runs=26000;
    cout<<c.runs;
    /* a->b means (*a).b */


    // cout<<c1.avg<<endl;
    // change(&c1);
    // cout<<c1.avg<<endl;



}