#include <bits/stdc++.h>
using namespace std;
int findCount(int arr[], int n,int num, int diff)
{
    int cnt=0;
   for(int i=0;i<n;i++)
   {
       if(abs(arr[i]-num)<=diff)
       {
           cnt++;
       }
     
   } 
   if(cnt==0)
   {
       return -1;
   }
   return cnt;
   
}
int main() {
 int arr[]={12, 3 ,14 ,56, 77, 13};
 int n=6;
 
 int num=13;
 int diff=2;
 int ans=findCount(arr,n,num,diff);
 cout<<ans<<endl;
 
    return 0;
}
