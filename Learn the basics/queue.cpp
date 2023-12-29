#include <bits/stdc++.h>
using namespace std;

// in stack we have push , pop , top
int main(){
 queue<int> q ;
 q.push(8);
 q.push(6);
 q.push(5);
 
 q.back() += 4;// adds to last element 5+4
 //prints last element
 cout<<q.back()<<endl;
 //print front element
 cout<<q.front()<<endl;
 
 q.pop();//{6,9}
 cout<<q.front();
}