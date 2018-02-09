#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int beautifulDays(int i, int j, int k) {
   int reminder,rev,temp,val,c=0;
   //printf("%d %d %d\n",i,j,k);
   for(val=i;val<=j;val++)
   {
       rev=0;
       temp=val;

       while(temp > 0)
       {
           reminder=temp % 10;
           rev=rev * 10+ reminder;
           temp/=10;
       }
       int result=abs(rev-val);
       double ans= result/(k*1.0);
       int ans1=ans;
       double result1=ans-ans1;
       if(result1==0)
       {
           c++;
       }

   }
   return c;
}

int main() {
    int i;
    int j;
    int k;
    scanf("%i %i %i", &i, &j, &k);
    int result = beautifulDays(i, j, k);
    printf("%d\n", result);
    return 0;
}

