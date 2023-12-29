
#include<bits/stdc++.h>

using namespace std;

//Space Complexity: O (1) 
//Time Complexity: O (n) 
int count(int n){
  int s = n;
  int c = 0 ;
  while( s != 0){
    s=s/10;
    c++;
  }
  return c;
}
int reverse( int n )
{
   int x = n; int z =0;
   int a = count(n);
   
   while( x !=0 ) 
   {
       int digits = x%10;
       z = z + pow(digits,a);
       x = x / 10;
   }
   return z;
}

int main()
{
   int n = 153;
   int y = reverse(n);
   if( n == y){
     cout<<"Armstrong Number"<<endl;
   }
   else{
     cout<<"Not Armstrong Number"<<endl;
   }
   
   return 0;
}
