#include<stdio.h>
void main(){
    int st_num, end_num, rev, temp, sum = 0, i, r;
    printf("Enter a starting number: ");
    scanf("%d", &st_num);
    printf("Enter an ending number: ");
    scanf("%d", &end_num);

    for(i = st_num; i <= end_num; i++){

        rev = 0;
        temp = i;
        while(temp > 0){
            r = temp % 10;
            temp = temp / 10;
            rev = rev * 10 + r;
        }

        if(rev == i){
            sum++;
        }
    }

    printf("The sum of the palindromes between the above given range is %d", sum);

}
