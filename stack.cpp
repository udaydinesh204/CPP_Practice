#include <bits/stdc++.h>
using namespace std;

// in stack we have push , pop , top
int main(){
  stack<int> st;
  st.push(5);
  st.push(8);
  st.push(7);
  st.emplace(9);
  
  //it will print top element in stack but it is not deleted
  cout<<st.top()<<endl;
  //to take out element 
  st.pop();
  cout<<st.top()<<endl;
  cout<<st.size();
 
}