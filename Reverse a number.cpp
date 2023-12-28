
#include<bits/stdc++.h>

using namespace std;

//Space Complexity: O (1) 
//Time Complexity: O (n) 
int solution1( int n )
{
   int x = n; int reverse =0;
   
   while( x !=0 ) 
   {
       int digits = x%10;
       reverse = reverse*10 + digits;
       x = x / 10;
   }
   return reverse;
}

int main()
{
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<solution1(n);
   return 0;
}
