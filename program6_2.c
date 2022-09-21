#include<stdio.h>
int main() {
    int a,b;
    printf("Enter start number: ");
    scanf("%d",&a);
    printf("Enter end number: ");
    scanf("%d",&b);
    for(int i = 1;i <= 5;i++){
        for(int j = a;j <= b;j++){
            printf("%d ",j*i);
        }
        printf("\n");
    }
    return 0;
}