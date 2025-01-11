#include <bits/stdc++.h>
using namespace std;
int differenceofSum(int n,int m)
{
   
   int sum1=0;
   int sum2=0;
   for(int i=1;i<=m;i++)
   {
       if((i%4)==0)
       {
           sum1+=i;
       }
       else
       {
           sum2+=i;
       }
   }
   int ans=sum2-sum1;
   return ans;
}
int main() {

 int n=4;
 int m=20;
 int ans=differenceofSum(n,m);
 cout<<ans;
    return 0;
}
