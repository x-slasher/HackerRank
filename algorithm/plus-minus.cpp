#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr_size, int* arr) {
    int neg=0,pos=0,zero=0;
    float val1,val2,val3;
    for(int i=0;i<arr_size;i++)
    {
        if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]>0)
        {
            pos++;
        }
        else
        {
            zero++;
        }
    }

    val1=neg/(arr_size*1.0);
    val2=pos/(arr_size*1.0);
    val3=zero/(arr_size*1.0);
    printf("%f\n%f\n%f",val2,val1,val3);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%d",&arr[arr_i]);
    }
    plusMinus(n, arr);
    return 0;
}
