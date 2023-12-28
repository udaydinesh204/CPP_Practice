
#include<bits/stdc++.h>

using namespace std;

//Space Complexity: O (1) 
//Time Complexity: O (n) 
int reverse( int n )
{
   int x = n; int z =0;
   
   while( x !=0 ) 
   {
       int digits = x%10;
       z = z*10 + digits;
       x = x / 10;
   }
   return z;
}

int main()
{
   int n = 121;
   int y = reverse(n);
   if( n == y){
     cout<<"Palindrome Number"<<endl;
   }
   else{
     cout<<"Not Palindrome Number"<<endl;
   }
   
   return 0;
}
