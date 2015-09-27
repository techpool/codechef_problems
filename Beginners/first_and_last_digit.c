/*
    If Give an integer N . Write a program to obtain the sum of the first and last digit of this number.
*/

#include<stdio.h>
#include<math.h>
void main(){
    int n, temp, sum, count = 0;
    printf("Enter an integer : ");
    scanf("%d", &n);
    temp = n;
    sum = n % 10;
    while(temp > 0){
        temp = temp/10;
        count++;
    }
    sum = sum + (n/(pow(10, count - 1)));
    printf("Sum of the first and last digit: %d", sum);

}
