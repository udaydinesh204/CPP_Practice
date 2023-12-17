#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ,m;
   // intput for n and m
    cin>> n;
    cin>> m;
    
    // Declaring 2D array 
    int arr[n][m];
    
    // Initialize 2D array using loop
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
       cin>>arr[i][j];
      }
    }
    
    // Printing the element of 2D array 
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
       cout<< arr[i][j] << " ";
       
      }
    cout<< endl;
    }
    return 0;
}