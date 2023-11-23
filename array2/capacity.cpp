#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    // dry run how size and capacity works side by side


    v.push_back(5); // 1(size) 1(capacity)
    v.push_back(6); // 2 2
    v.push_back(7); // 3 4
    v.push_back(11); // 4 4
    v.push_back(9); // 5 8
    v.push_back(10); // 6 8
    v.push_back(6); // 7 8
    v.push_back(7); // 8 8
    v.push_back(11); // 9 16
    v.push_back(9); // 10 16 
    v.push_back(10); // 11 16
    v.push_back(6); // 12 16
    v.push_back(7); // 13 16 
    v.push_back(11); // 14 16
    v.push_back(9); // 15 16
    v.push_back(10); // 16 16
    v.push_back(6); // 17 32
    v.push_back(7); // 18 32 
    v.push_back(11); // 19 32
    v.push_back(9); // 20 32
    v.push_back(10); // 21 32
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; // use to count element
    }
    cout<<endl;
    
    cout<<"capacity of this vector: "<<v.capacity()<<endl; // check all capacity
    cout<<"size of this vector: "<<v.size()<<endl; // check all size

    v.pop_back(); // use to remove last element from the vector
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; // use to count element
    }
    cout<<endl;
    cout<<"capacity of this vector: "<<v.capacity()<<endl; // after pop up capacity doesnot change 
    cout<<"size of this vector: "<<v.size()<<endl; // after pop up size change because of reducing
    
    return 0;
}