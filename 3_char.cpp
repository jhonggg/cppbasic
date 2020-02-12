/*
CHARACTER
-127 ~ +127

UNSIGNED CHARACTER
0 ~ +255

ASC II CODE
1. Special Character : 33 ~ 47,  58 ~ 64, 91 ~ 96, 123 ~ 126
2. Number : 48 ~ 57
3. Large Word : 65 ~ 90
4. Small Word : 97 ~ 122
*/
#include<iostream>

using namespace std;

int main(){

    char ch1 = 'c';
    char ch2 = 200;

    unsigned char ch3 = 'c';
    unsigned char ch4 = 200;

    printf("char ch1 = %c, %d\n", ch1, ch1);
    printf("char ch2 = %c, %d\n", ch2, ch2);
    printf("char ch3 = %c, %d\n", ch3, ch3);
    printf("char ch4 = %c, %d\n", ch4, ch4);

    return 0;
}