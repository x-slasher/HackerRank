#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int runningTime(int arr_size, int* arr) {
    int val,j,c=0;
    for(int i=1;i<arr_size;i++)
    {
        val=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j--;
            c++;
        }
        arr[j+1]=val;
    }
   return c;
}

int main() {
    int n;
    scanf("%i", &n);
    int arr[n];
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    int result = runningTime(n, arr);
   printf("%d\n", result);
    return 0;
}
