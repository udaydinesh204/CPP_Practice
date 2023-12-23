#include <bits/stdc++.h>
using namespace std;


int main(){
  vector<int> v(5,10);
 for(vector<int>::iterator it = v.begin(); it < v.end(); it++ ){
   cout<<*(it)<<" ";
 }
 cout<<endl;
 // we can replace vector<int>::iterator by auto
 for(auto it=v.begin(); it<v.end();it++){
   cout<<*(it)<<" ";
 }
 cout<<endl;
 //more simpler way
 for(auto it:v){
   cout<<it<<" ";
 }
 
 //deletion- we use erase
 v.erase(v.begin()+1);
 //[start,end]-if we want delete 2 to 3 elements 
 v.erase(v.begin()+1 , v.begin()+3);
 
 //insert funtion 
 v.insert(v.begin(),50)//insert in beginning
 v.insert(v.begin()+1,2,30)
 
 vector<int> copy(2,50);
 v.insert(v.begin(), copy.begin(), copy.end());//{50,50,10,10,10,10,10}
 
 //size
 cout<<v.size();
 
 //swap vector
 v.swap(copy);
 
 //clear vector
 v.clear();
 
 cout<<v.empty(); // if element is there return false , anotherwise true
}