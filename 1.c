#include<stdio.h>
int main()
{
    int n=1,i,j,m,k;
    scanf("%d",&n);
    char x[n][1000];
    int y[n],mi[n];
    for(i=0; i<n; i++)
        scanf(" %[^\n]s",x[i]);
    for(j=0; j<26; j++)
    {
        for(i=0; i<n; i++)
        {
            if((x[i][0]==65+j)||(x[i][0]==97+j))
                printf("%s\n",x[i]);
        }
    }
    return 0 ;
}
