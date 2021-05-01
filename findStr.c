#include <stdio.h>
#include <string.h>

int main() {
char smlst[100], lrgst[100];
int i = 0;
char temp[100];
while(1) {
printf("Enter word: ");
scanf("%s", temp);
if(i == 0) {
strcpy(smlst, temp);
strcpy(lrgst, temp);
}
else {
if(strcmp(temp, smlst) < 0) {
strcpy(smlst, temp);
}
if(strcmp(temp, lrgst) > 0) {
strcpy(lrgst, temp);
}
}
if(strlen(temp) == 4) {
break;
}
i++;
}
printf("\nSmallest word: %s\n", smlst);
printf("Largest word: %s\n", lrgst);
}