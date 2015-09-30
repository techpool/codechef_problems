/*

Chef has a sequence of N numbers. He like a sequence better if the sequence contains his favorite sequence as a substring.
Given the sequence and his favorite sequence(F) check whether the favorite sequence is contained in the sequence

Input

The first line will contain the number of test cases and are followed by the cases.
Each test case consists of four lines: The length of the sequence, the sequence N,the length of F and the sequence F

Output

Print "Yes" if the sequence contains the favourite sequence int it otherwise print "No"

*/

#include<stdio.h>
#include<stdbool.h>
void main(){
    int n, f, seq[100], fav[100], i, j;
    bool found;
    printf("Enter the number of digits in the sequence: ");
    scanf("%d", &n);
    printf("Enter your sequence(separated by spaces): ");
    for(i = 0; i < n; i++){
        scanf("%d", &seq[i]);
    }
    printf("Enter the number of digits in your favorite sequence: ");
    scanf("%d", &f);
    printf("Enter your favorite sequence: ");
    for(i = 0; i < f; i++){
        scanf("%d", &fav[i]);
    }

    for(i = 0; i < n; i++){
        if(seq[i] == fav[0]){
            for(j = 1; j < f; j++){

                if(seq[i + j] == fav[j]){
                    found = true;
                    continue;
                } else {
                    found = false;
                    break;
                }
            }
        }

        if(found){
            break;
        } else {
            continue;
        }
    }

    if(found){
        printf("Yes your favorite sequence is present.");
    } else {
        printf("No your favorite sequence is not there.");
    }

}
