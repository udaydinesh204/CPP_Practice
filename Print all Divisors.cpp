
#include<bits/stdc++.h>

using namespace std;

//Space Complexity: O (1) 
//Time Complexity: O (n) 
void printDivisorsBruteForce(int n){
  int x = n;
  cout<<"No. of divisors "<< n << " is: ";
  for(int i =1 ; i<=x ; i++){
    if(x%i == 0){
      cout<<i<<" ";
    }
  }
}


//Optimal approch
//Space Complexity: O (1) 
//Time Complexity: O (sqrt(n)) 
void printoptimalapproch(int n){
  cout<<"No. of divisors "<< n << " is: ";
  for(int j = 1; j<=sqrt(n); j++){
    if(n%j == 0){
      cout<<j<<" ";
      if(j != n/j) cout<<n/j<<" ";
    }
  }
}

int main()
{
   printDivisorsBruteForce(20);
   cout<<endl;
   printoptimalapproch(20);
   return 0;
}