#include <stdio.h>

main(){
    char grade;
    printf("Enter a letter for grade\n");
    scanf("%c", &grade);
    switch(grade){
case 'A':
    printf("You did excellent\n");
    break;
case 'B':
    printf("You did good\n");
    break;
case 'C':
    printf("You did okay\n");
    break;
case 'D':
    printf("Atleast it's not an F");
    break;
case 'F':
    printf("You have FAILED\n");
    break;
default:
    printf("Please enter only CAPITAL LATTERS from A-F, ofcourse without E");
    break;
    }


}
