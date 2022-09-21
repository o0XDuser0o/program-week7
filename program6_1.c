#include<stdio.h>
int main() {
    int a,b;
    printf("Enter start number: ");
    scanf("%d",&a);
    printf("Enter end number: ");
    scanf("%d",&b);
    int nextA = a,nextB =b;
    for(int counter = 1;counter <= 5;counter++){
        int c =nextA;
        while(c<=nextB){
            printf("%d ",c);
            c += counter;
        }
        printf("\n");
        nextA += a;
        nextB += b;
    }
    return 0;
}