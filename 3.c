#include<stdio.h>
int main(){
    long x,y,i,w,e,j,max,k=0 ;
    char a ;
    scanf("%ld %ld",&x,&y) ;
    long b[x],n[x] ;
    for(i=0;i<x;i++){
        b[i] = 0 ;
    }
    for(i=0;i<y;i++){
        scanf(" %c %ld %ld",&a,&w,&e) ;
        if(a=='U'){
             b[w]=e ;
        }
        if(a=='P'){
            max = b[w] ;
            for(j=w;j<=e;j++)
                if(max<b[j])
                    max = b[j] ;
            n[k]= max ;k++ ;
        }
    }
    for(i=0;i<k;i++)
        printf("%ld\n",n[i]) ;

    return 0 ;
}
