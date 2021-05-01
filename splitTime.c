#include <stdio.h>
void split_time(long, int*, int*, int*);
int main() {
int n, hr = 0, min = 0, sec = 0;
printf("Enter Seconds: ");
scanf("%d", &n);
if(n < 0){
printf("Seconds can't be negative, enter positive value");
}
else {
split_time(n, &hr, &min, &sec);
printf("Converted format: %d hour %d mins %d secs\n", hr, min, sec);
}
return 0;
}
void split_time(long total_sec, int*hr, int*min, int*sec) {
int r_secs = 0;
*hr = total_sec/3600;
r_secs = total_sec%3600;
*min = r_secs/60;
*sec = r_secs%60;
}