#include<stdio.h>
int main(){
 int n=3,i,j,x=1,max,min,l,max1=1,min1=1;
 if(n>2&&n<=1000)
  scanf("%d",&n);
 int a[n][2],b[n];
 for(i=0;i<n;i++){
  for(j=0;j<2;j++){
   if(x>=1&&x<=n)
    scanf("%d",&x);
   a[i][j]=x;
  }
 }
 for(l=1;l<=n;l++){
  for(i=0;i<n;i++){
  for(j=0;j<2;j++){
   if(l==a[i][j]){
    b[l]+=1;
   }
  }
 }
 }
 max=b[1];
 min=b[1];
 for(i=1;i<=n;i++){
       if(max<b[i]){
         max=b[i];
         max1=i;
    }
        if(min>b[i]){
         min=b[i];
         min1=i;
  }
   }
   printf("%d %d",max1,min1);
 return 0;
}
