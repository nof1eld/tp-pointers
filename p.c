#include<stdio.h>
#include<stdlib.h>

int main(){
    int X;
    printf("Enter X: ");
    scanf("%d", &X);
    int *pX = &X;
    int Y = *pX;
    //the value of X:
    printf("X: %d\n", X);
    //the address of X (pX holds the address while *pX holds the value):
    printf("X address(pX): %p\n", pX);
    //the value of Y(= the value of X):
    printf("Y: %d\n", Y);
    return 0;
}
//References: https://youtu.be/2ybLD6_2gKM?si=HGBQJKp8W8M4CagR, 
//MS Copilot