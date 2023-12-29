
#include<bits/stdc++.h>

using namespace std;

//Time Complexity: O (1) for solution2 and solution3,Space Complexity: O(1) for all
//Time Complexity: O (n) for solution1
int solution1( int n )
{
   int x = n; int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}

int solution2( int n )
{
  string x = to_string(n);
  return x.length(); 
}

int solution3( int n )
{
  int digits = floor(log10(n) + 1);
  return digits;
}

int main()
{
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<solution3(n);
   return 0;
}
