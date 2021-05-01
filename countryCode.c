#include <stdio.h>

struct dialCode {
char *country;
int code;
};
int main (int argc, char* argv[]) {
int intl, i;
//This initializes the int intl.
const struct dialCode country_codes[] = {
{"Afghanistan", 93}, {"Bahamas",        1-242},
{"Brazil",     55}, {"Bolivia",    591},
{"China",      86}, {"Canada",           1},
{"Costa Rica", 506}, {"Egypt",              20},
{"Ethiopia", 251}, {"France",             33},
{"Greece",    30}, {"India",              91},
{"Indonesia", 62}, {"Ireland",               353},
{"Italy",      39}, {"Japan",              81},
{"Mexico",     52}, {"Nigeria",           234},
{"Peru",   51}, {"Philippines",        63},
{"Portugal",     351}, {"Vietnam",              84}
};
//This stores the country codes to be used in the program.
int entries = sizeof(country_codes) / sizeof(*country_codes);
do {
int found = 0;
printf("Enter international code (enter -1 to quit): ");
scanf("%d", &intl);
//This prompts the user to enter a number to look up.
if (intl == -1)
//If the user enters -1, the loop will break/end.
break;
for (i = 0; i < entries; i++) {
if (country_codes[i].code == intl) {
printf("Country found: %s\n", country_codes[i].country);
found = 1;
//This will allow the program to constantly loop until the user enters -1. This will match up the number the user entered with the country associated with the number.
}
}
if (!found)
printf("Country Code not found.\n");
} while(1);
return 0;
//This is what the program will print when the user enters a number that is not in the directory.
}