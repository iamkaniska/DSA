/* given an array of marks of students, 
if the marks of any students is less than 35print its roll number
[roll number is refer here as index] */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter stdent[array] size: ";
    cin>>n;
    int grade[n];
    cout<<"Enter marks of n students: ";
    for (int i = 0; i < n; i++)
    {
        cin>>grade[i];
    }
    cout<<"fail studnets roll no: ";
    for (int i = 0; i < n; i++)
    {
        if (grade[i]<35){
            cout<<i<<" ";
        }
    }
    
    
}