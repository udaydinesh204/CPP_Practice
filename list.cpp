#include <bits/stdc++.h>
using namespace std;


int main(){
 list<int> ls;
 ls.push_back(3);
 ls.emplace_back(6);//{3,6}
 
 ls.push_front(0);//{0,3,6}
 ls.emplace_front(-3);
 
 //rest functions same as vector ;
}
