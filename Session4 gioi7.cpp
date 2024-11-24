#include <stdio.h>
int main(){
    int year;
    printf("Nhap vao nam: ");
    scanf("%d",&year);
    if (year%4==0){
      printf("nam nhuan");
    }
    else{
      printf("khong phai la nam nhuan");
    }
}
