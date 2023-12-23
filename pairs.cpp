#include <bits/stdc++.h>
using namespace std;


int main(){
  //Create pair
  pair<int , int> p = {2,4};
  //printing first element and second element
  cout<< p.first << " "<<p.second<<endl;
  
  //Creating pair of 3 elements
  pair<int, pair<int,int>> u ={3,{2,7}};
  
  cout<<u.first<<" "<<u.second.first << " "<< u.second.second << endl;
  
  //creating pair with array ;
  pair<int,int> arr[] = {{7,4},{6,3},{8,2}};
  
  cout<<arr[2].first;
}