#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        int x=temp.top();
        st.push(x);
        temp.pop();

    }
    cout<<endl;
    cout<<st.size();

}