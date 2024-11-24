#include <stdio.h>
int main() {
    int n;
    printf("Nhap vao so nguyen: ");
    scanf("%d",&n);
    if(n%3==0){
        printf("n chia het cho 3");
    }
    else if(n%5==0){
        printf("n chia het cho 5");
    }
    else if(n%3==0&&n%5==0){
        printf("n chia het cho 3 va 5");
    }
    else{
        printf("n khong chia het cho ca 3 va 5");
    }
}
