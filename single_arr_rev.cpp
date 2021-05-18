#include<iostream>
#include<bits/stdc++.h
using namespace std;
void single_arr_rev(int i,int n,int a[])
{
   if(i>=((n-1)-i))
      {
       return;
      }
  swap(a[i],a[n-1]);
   return single_arr_rev(i+1,((n-1)-i)-1,a);
 } 
 int main()
 {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   int i=0;
   cout<<single_arr_rev(i,n,a);
  } 
   
