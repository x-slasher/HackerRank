#include<bits/stdc++.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        int n;
        int mat[500][500];
        scanf("%d",&n);
        for(int i=0;i<2*n;i++)
        {
            for(int j=0;j<2*n;j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }
        int result=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int value = mat[i][j];
                if (mat[2*n-1-i][j] > value)
                {
                    value = mat[2*n-1-i][j];
                }
                if (mat[i][2*n-1-j] > value)
                {
                    value = mat[i][2*n-1-j];
                }
                if (mat[2*n-1-i][2*n-1-j] > value)
                {
                    value = mat[2*n-1-i][2*n-1-j];
                }
                result =result+value;
            }
        }
        printf("%d\n",result);
    }
}
