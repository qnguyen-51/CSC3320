#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int myCompare(const void* a, const void* b) {
return strcmp(*(const char**)a, *(const char**)b);
//This initializes the ints and compares them.
}
void sort_alphabetic(const char* arr[], int n) {
qsort(arr, n, sizeof(const char*), myCompare);
//This is used to sort the array.
}
int main() {
const char* arr[] = { "Sysytems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};
int n = sizeof(arr) / sizeof(arr[0]);
int i;//This initializes the array, int n and int i.
sort_alphabetic(arr, n);
printf("Sorted array: \n");
//This calls for the sorted array method and prints it.
for (i = 0; i < n; i++)
printf("%d: %s \n", i, arr[i]);
return 0;
}