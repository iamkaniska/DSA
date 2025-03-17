#include<iostream>
using namespace std;
class Crickter{
    public:
    string name;
    int runs;
    float avg;
    Crickter(){
    };
    Crickter(string name,int runs,float avg){
        this->name = name;    // to specify the construcor name with the class name we use this keyword
        this->runs = runs;
        this->avg = avg;
    }
    //print function inside the class
    void task1(){
    cout<<name<<" "<<runs<<" "<<avg<<" "<<endl;
    }
    //print function using this keyword
    void task2(int runs){
    cout<<name<<" "<<this->runs<<" "<<avg<<" "<<endl; //if we did not use this keyword the run will swap with the main function value, so we have to specify with this keywords
    }
    // we can use return function
    int temp(){
        return (runs/avg);
    }
};


//print using function and outside of class
void task(Crickter c){
    cout<<c.name<<" "<<c.runs<<" "<<c.avg<<" "<<endl;
};

int main(){
    Crickter c1;
    c1.name="Virat Kohli";
    c1.runs=25000;
    c1.avg=55.50;

    Crickter c2("Kapil Dev",20000,60.90);

    // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<" "<<endl;
    // cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<" "<<endl;

    task(c1); //function call
    task(c2);

    c1.task1(); //class inside function call
    c2.task1();

    c1.task2(5); // class inside function using this keyword
    c2.task2(6);

    cout<<c1.temp(); //avarage using return function

}