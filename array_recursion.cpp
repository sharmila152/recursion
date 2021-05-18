#include<iostream>
using namespace std;
void reverse_array(int L,int R,int a[])
{
   int temp;
   if(L>R)
      {
       return;
      }
   temp=a[L];
   a[L]=a[R];
   a[R]=temp;
   return reverse_array(L+1,R-1,a);
 } 
 int main()
 {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   int L=0,R=n-1;
   cout<<reverse_array(L,R,a);
  } 
   


