#include<iostream>
using namespace std;
int bs(int x,int low,int high,int a[])
{
  if(low<=high)
  {
    int mid=(low+high)/2;
    if(a[mid]==x)
      return mid;
    if(a[mid]<x)
      return bs(x,mid+1,high,a);
    if(a[mid]>x)
      return bs(x,low,mid-1,a);
  }
  else
  {
    return -1;
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  int x;
  cin>>x;
  int x,low,high;
  low=0;
  high=n-1;
  int position=bs(x,low,high,a);
  if(position==-1)
    cout<<x<<" is not present in the array";
  else
    cout<<x<<"is present in the array at"<<position;
}
  
