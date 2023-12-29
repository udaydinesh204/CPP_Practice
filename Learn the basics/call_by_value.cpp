#include <iostream>
using namespace std;

void swap(int x, int y);

int main() 
{
   int a = 7 , b = 18 ;
   swap(a,b);
   
   cout<< "In the caller\n";
   cout<< "a = " << a << "b = "<<b<<endl;
   
   return 0;
}

void swap(int x,int y){
  int t;
  
  t=x;
  x=y;
  y=t;
  
  cout<<"Inside function:\n";
  cout<<"x = " <<x<<"y = "<<y<<endl;
}