#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
int score = 0, upperCount = 0, lowerCount =0, numCount = 0;
char ch;
//This initialize variables
printf("Enter a password :");
while ((ch = getchar()) != '\n') {
if(ch >= 'a' && ch <= 'z') {
lowerCount++;
}
//This if loop will check if there is a char within the alphabet that is lowercase.
if(ch >= 'A' && ch <= 'Z') {
upperCount++;
}
//This if loop will check if there is a uppercase letter from the alphabet.
if(ch >= '0' && ch <= '9') {
numCount++;
}
//THis checks whether there is a number in the password.
}
if(lowerCount == 0) {
score += 20;
}
//This checks whether the password includes a lowercase letter, the score will add 20.
if(upperCount == 0) {
score += 20;
}
//This checks whether the password includes an uppercase letter, the score will add 20.
if(numCount == 0) {
score += 20;
}
printf("\nScore = %d\n",(-score));
//This will print the current score.
if(score > 30) {
printf("The password is unsafe! Please reset.\n");
}
else {
printf("The password is safe.\n");
}
//This will check if the score is higher than 30 and if not, it will have the user input a new password. Otherwise the program will print password is good.
return 0;
}
