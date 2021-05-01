#include <stdio.h>
#include <string.h>
#include <time.h>

struct user  {  
char firstName[30];
char lastName[30];
int dd,mm,yy;
char sex[6];
int currdd,currmm,curryy;
int dnum;
char vaxType[30];
char zip[6];
//This initializes all the data to be input by user
};  
int getage(int currDate, int currMonth, int currYear, int bdate, int bmonth, int byear) {
int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
if (bdate > currDate) {
currDate = currDate + month[bmonth - 1];
currMonth = currMonth - 1;
}
if (bmonth > currMonth) {
currYear = currYear - 1;
currMonth = currMonth + 12;
}
int final_date = currDate - bdate;
int final_month = currMonth - bmonth;
int final_year = currYear - byear; 
return final_year;
//This calculates the age of the user by taking the current date and subtracting with the birthdate
}
int main(void) {
struct user u1[10];
int choice;
char id[8];
char age[2];
int i;
//This initializes the user data.
for(i = 0;i<10;i++){
printf("Enter detail for %d person : \n",i+1);
printf("Enter First Name : ");
scanf("%s", u1[i].firstName);
printf("Enter Last Name : ");
scanf("%s", u1[i].lastName);
//This prompts the user to enter their first and last name
printf("Enter Birth Date(mm/dd/yyyy) : ");
scanf("%d/%d/%d",&u1[i].dd,&u1[i].mm,&u1[i].yy);
//This prompts the user to enter theior birthday
printf("Choose sex : \n");
printf("\t1. Male\n");
printf("\t2. Female\n\tEnter choice : ");
scanf("%d", &choice);
if(choice == 1)
strcpy(u1[i].sex, "Male");
else if(choice == 2)
strcpy(u1[i].sex, "Female");
else{
printf("Please choose valid sex.\n");
return 1;
//This prompts the user to enter their sex identification and checks if it is a valid response
}
printf("Enter Dose Number : ");
scanf("%d", &u1[i].dnum);
if(!(u1[i].dnum == 1 || u1[i].dnum == 2)){
printf("Please enter valid dose number.\n");
return 1;
}
//This prompts the user to enter their dose number and checks for a valid response.
if(u1[i].dnum == 2){
printf("Enter Previous Dose Date(mm/dd/yyyy) : ");
scanf("%d/%d/%d",&u1[i].dd,&u1[i].mm,&u1[i].yy); 
//This will ask the user when their first dose weas, if they entered that this is their second dose. 
}
printf("Choose type of vaccine : \n");
printf("\t1. Pfizer\n");
printf("\t2. Moderna\n");
printf("\t3. Johnson&Johnson\n\tEnter choice : ");
scanf("%d", &choice);
//This prompts the user to enter their desired vaccine type.
if(choice == 1)
strcpy(u1[i].vaxType, "Pfizer");
else if(choice == 2)
strcpy(u1[i].vaxType, "Moderna");
else if(choice == 3)
strcpy(u1[i].vaxType, "Johnson&Johnson");
else{
printf("Please choose valid type of vaccine.\n");
return 1;
//THis is used to check for valid response
}
printf("Enter Zip : ");
scanf("%s", u1[i].zip);
//This asks the user to enter their zipcode.
id[0] = u1[i].firstName[0];
id[1] = u1[i].lastName[0];
time_t t = time(NULL);
struct tm tm = *localtime(&t);
int ageTemp = getage( tm.tm_mday,tm.tm_mon + 1,tm.tm_year + 1900,u1[i].dd,u1[i].mm,u1[i].yy);
id[2] = (char)(ageTemp/10+ '0');
id[3] = (char)(ageTemp%10+ '0');
//This gets the user's age.
id[4] = u1[i].vaxType[0];
//This gets the first character of the vaccine type.
id[5] = u1[i].zip[3];
id[6] = u1[i].zip[4];
id[7] = u1[i].zip[5];
//This grabs the zipcode.
printf("\nFirst Name : %s\n",u1[i].firstName);
printf("Last Name : %s\n",u1[i].lastName);
printf("Birthdate : %d/%d/%d\n",u1[i].mm,u1[i].dd,u1[i].yy);
printf("Sex : %s\n",u1[i].sex);
printf("Dose Number : %d\n",u1[i].dnum);
//THis prints all the details the user entered.
if(u1[i].dnum == 2){
printf("Previous Dose Date : %d/%d/%d\n",u1[i].currmm,u1[i].currdd,u1[i].curryy);
}
//THis is for when the user entered for the second dose.
printf("Vaccine type : %s\n",u1[i].vaxType);
printf("Zip : %s\n",u1[i].zip);
printf("Code : %s\n\n",id);
//This prints the zipcode and the specialized code for the user.
}
return 0;
}