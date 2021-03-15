#include<stdio.h>
int main () {
    int n,i,j,b=1,k,max,min,x=0,y=0 ;
    scanf("%d",&n) ;
    int a[n] ;
    for(i=0;i<n;i++)
        a[i] = 0;
    for(i=0;i<n;i++){
        for(j=1;j<=2;j++){
                if(b>0&&b<=n)
                scanf("%d",&b) ;
            k=0 ;
            for(;k<n;k++)
                if(k==b-1)
                    a[k] +=1  ;
        }
    }
    max = a[0] ;
    min = a[0] ;
    for(i=1;i<n;i++){
        if(max<a[i]&&a[i]!=0){
            max = a[i] ;
            x = i ;
        }
        if(min>a[i]){
            min = a[i] ;
            y = i ;
        }
    }
    if(b<=n)
    printf("%d %d",x+1,y+1) ;
    return 0 ;
}
