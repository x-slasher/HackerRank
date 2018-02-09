#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,result;
    scanf("%d", &n);
    int a[n][n];
    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) {

          scanf("%d",&a[a_i][a_j]);
       }
    }
    int sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
                //printf("%d\n",a[i][j]);
            }
        }
    }
    int val=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==val)
            {
                sum1=sum1+a[i][j];

                //printf("%d ",a[i][j]);
           }
        }
        //printf("\n");
        val--;
    }

    result=abs(sum - sum1);

    printf("%d\n", result);
    return 0;
}
