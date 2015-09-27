/*
There are 100 houses located on a straight line. The first house is numbered 1 and the last one is numbered 100.
Some M houses out of these 100 are occupied by cops.
Thief Devu has just stolen PeePee's bag and is looking for a house to hide in.
PeePee uses fast 4G Internet and sends the message to all the cops that a thief named Devu has just stolen her bag
and ran into some house. Devu knows that the cops run at a maximum speed of x houses per minute in a straight line
and they will search for a maximum of y minutes. Devu wants to know how many houses are safe for him to escape from
the cops. Help him in getting this information.

Input

First line contains T, the number of test cases to follow.
First line of each test case contains 3 space separated integers: M, x and y.
For each test case, the second line contains M space separated integers which represent the house numbers where the cops are residing.

Output

For each test case, output a single line containing the number of houses which are safe to hide from cops.
*/
#include<stdio.h>
void main(){
    int m, x, y, houses[100] = {0}, temp1, temp2, temp, cap[100], i, j, safehouses = 0;
    printf("Enter the number of houses occupied by the police: ");
    scanf("%d", &m);
    printf("Enter the number of houses they check per minute: ");
    scanf("%d", &x);
    printf("Enter the total time for which they will search: ");
    scanf("%d", &y);

    for(i = 0; i < m; i++){
        printf("House Number: ");
        scanf("%d", &temp);
        cap[i] = temp - 1;
    }

    for(i = 0; i < m; i++){
        temp1 = temp2 = cap[i];
        houses[cap[i]] = 1;
        temp1++;
        temp2--;
        for(j = 0; j < x*y; j++){
            if(temp1 < 100){
                //printf("%d\n", temp1);
                houses[temp1] = 1;
                temp1++;
            }

            if(temp2 >= 0){
                houses[temp2] = 1;
                temp2--;
            }
        }
    }

    for(i = 0; i < 100; i++){
        if(houses[i] == 0){
            printf("%d\n", i);
            safehouses++;
        } else{
            continue;
        }
    }

    printf("The Total number of available safe houses: %d", safehouses);
}
