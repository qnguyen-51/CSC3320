#include <string.h>
#include <stdio.h>

int main() {
char str[1000];
printf("Enter a string: ");
scanf("%s",str);
//THese statements will initialize the string the user inputs.
if(isPalin(str)) {
printf("Palindrome\n");
} else {
printf("Not a Palindrome\n");
}
//This uses the method created below to determine whether the string the user inputed is a palindrome and will return the respective answer.
return 0;
}
int isPalin(char str[]) {
int length = strlen(str);
int left = 0;
int right = length - 1;
char ch;
//THese will initialize the string length, left right and chars to use in the method.
while(left < right) {
ch = str[left];
if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
left++;
continue;
}
ch = str[right];
if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
right--;
continue;
}
if(str[left] != str[right]) {
return 0;
}
left++;
right--;
}
return 1;
//These loops will go through the string and compare the left character to the right character, if it matches it will continue through the string, if not, the loop will break and return not a palindrome.
}
