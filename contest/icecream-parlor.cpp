#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int t;
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int m;
        scanf("%i", &m);
        int n;
        scanf("%i", &n);
        int arr[n];
        for (int arr_i = 0; arr_i < n; arr_i++) {
           scanf("%i",&arr[arr_i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==m)
                {
                    printf("%d %d\n",i+1,j+1);

                }
            }
        }



    }
    return 0;
}
