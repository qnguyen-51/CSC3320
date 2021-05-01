#include <stdio.h>
int main (void) {
int i, j;
char nph[13], ph[12];
printf("Enter phone number [(999)999-9999]: ");
scanf ("%s", nph);
j = 0;
for (i = 0; i < 13; i++) {
if (nph[i] != '(' && nph[i] != ')' {
ph[j]=nph[i];
j++;
}
else if (nph[i] == ')' {
ph[j]='-';
j++;
}
}
printf ("You entered %s\n", ph);
return 0;
}
