#include <stdio.h>
int main() {
    int firstNumber,secondNumber,thirdNumber;
    printf("Nhap vao ba nguyen: ");
    scanf("%d %d %d",&firstNumber,&secondNumber,&thirdNumber);
    if(firstNumber<=thirdNumber&&thirdNumber<=secondNumber){
        printf("so thu 3 nam giua so thu 2 va so thu 1");
    }
    else if(secondNumber<=thirdNumber&&thirdNumber<=firstNumber){
        printf("so thu 3 nam giua so thu 2 va so thu 1");
    }
    else{
        printf("so thu 3 khong nam giua so thu 2 va so thu 1");
    }
}
