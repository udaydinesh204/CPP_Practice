#include <bits/stdc++.h>
using namespace std;


int main(){
 //vector - dynamic array
 //creating empty container
 vector<int> v;
 
 //for inserting element we use push_back
 v.push_back(1);
 //same as above but faster then push_back
 v.emplace_back(2);
 
 //pair in vectors
 vector<pair<int,int>> vec;
 
 vec.push_back({2,4});
 vec.emplace_back(3,4);
 
 //if want to copy one vector in another
 vector<int> v1(5,20); //after declared also we can insert new element into vector
 vector<int> v2(v1);
 cout<< v1[2];
 
 //using iterator is basically it points to the memory address
 vector<int>::iterator it = v2.begin() ;
 // when we print the v3.begin it prints the memory address. for accessing element we use star- *(v3.begin)
 it++;
 cout<<*(it) << " ";
 it = it+2;
 cout <<*(it)<<" ";

 vector<int>::iterator it=v2.end();//it prints right after end element, so we use it-- to print last element
 vector<int>::iterator it=v2.rend();//reverse end
 vector<int>::iterator it=v2.rbegin();//reverse begin
  
 cout<<v2.back()<<" ";
}