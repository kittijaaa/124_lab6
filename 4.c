#include<stdio.h>
int main () {
    int n,i,j,b=1,k,max,min ;
    scanf("%d",&n) ;
    int a[n] ;
    for(i=0;i<n;i++)
        a[i] = 0;
    for(i=0;i<n;i++){
        for(j=1;j<=2;j++){
                if(b>0&&b<=n)
                scanf("%d",&b) ;
            k=0 ;
            for(;k<n;k++){
                if(k==b-1){
                    a[k] +=1  ;
                }
            }
        }
    }
    max = a[0] ;
    min = a[0] ;
    for(i=1;i<n;i++){
        if(min<a[i]&&a[i]!=0){
            min = a[i] ;
        }
        if(max>a[i]&&a[i]!=0){
            max = a[i] ;
        }

    }
    printf("%d",max+1) ;
    printf("%d",min+1) ;
    return 0 ;
}
