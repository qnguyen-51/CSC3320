#include<stdio.h>

int main() {
char ch;
//This initializes ch as a char.
printf("Enter a password : ");
//This statement prompts the user to enter a password.
int count = 0;
//This will initialize the count int.
do {
ch = getchar();
count++;
//This do loop will read the characters in the password and store it in the count.
}
while(ch != '\n');
int score = -(10 - count + 1) * 5;
printf("Score = %d\n", score);
if(score < -30)
//This will calculate the total score depending on the number of characters.
printf("The password is unsafe! Please reset.");
else
printf("The password is safe.\n");
//This will print whether the password is safe or not depending on the score.
return 0;
}