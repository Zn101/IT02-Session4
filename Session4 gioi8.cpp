#include <stdio.h>
int main(){
    int a,b,c;
    printf("Nhap vao ba canh a b c: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a){
      printf("ba canh tao thanh mot tam giac");
    }
    else{
      printf("ba canh khong tao thanh mot tam giac");
    }
}
