#include<iostream>
using namespace std;
int string_rev(int i,int j,char str[])
{
   if(i>=j)
   {
     if(str[i]!=str[j])
       return;
     else
       return string_rev(i+1,j-1,str[]);
   }
       
 } 
 int main()
 {
   int n;
   cin>>n;
   char str[n];
   cin>>str[n];
   int i=0,j=n-1;
   int ans=string_rev(i,j,str);
   if(ans)
     cout<<"string is palindrome";
   else
     cout<<"string is not apalindrome";
  } 
   
