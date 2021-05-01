#include <stdio.h>

void sort_numericAscend(int n, int* num) {
int i, j, a;
//tHis initializes the ints to be used in the functions below.
for (i = 0; i < n; i++) {
for (j = i + 1; j < n; j++) {
if (*(num + j) > *(num + i)) {
a = *(num + i);
*(num + i) = *(num + j);
*(num + j) = a;
//These loops will go thorugh the elements in the array and compare the value of each element.
}
}
}
// print the numbers
for (i = 0; i < n; i++)
printf("%d ", *(num + i));
}
void sort_numericDescend(int n, int* num) {
int i, j, a;
// Sort the numbers using pointers
for (i = 0; i < n; i++) {
for (j = i + 1; j < n; j++) {
if (*(num + j) < *(num + i)) {
a = *(num + i);
*(num + i) = *(num + j);
*(num + j) = a;
}
}
}
// print the numbers
for (i = 0; i < n; i++)
printf("%d ", *(num + i));
}
int main() {
int n = 11;
int arr[] = { 10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56 };
char sortType;
printf("Enter A or a for Ascending Order");
printf("\nEnter D or d for Descending Order\n");
scanf("%c",&sortType);
if(sortType=='A'||'a'){
sort_numericAscend(n, arr);
}
else if(sortType=='D'||'d'){
sort_numericDecend(n,arr);
}
return 0;
}