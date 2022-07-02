//Traversing Operation.
#include <stdio.h>
void main()
{
int array[] = {1,2,3,4,5};
int i, n = 5;
printf(" The array elements are: \n " );
for( i=0;i < n; i++)
{
printf(" array[%d] = %d \n " , i, array[i] );
}
}

//Searchting Operation.
#include<stdio.h>
int findElement(int arr[], int n,  int key)
{
int i;
for (i = 0; i < n; i++)
if (arr[i] == key
return i;
return -1;
}
int main()
{
int arr[] = {1, 4, 0, 6, 3};
int n = sizeof(arr) / sizeof(arr[0]);
int key = 4;
int position = findElement(arr, n, key);
if (position == - 1)
printf("Element not found");
else
printf("Element Found at Position: %d", position + 1 );
return 0;
}
    
//Inserting Operation.
#include<stdio.h>
int insertSorted(int arr[], int n,  int key, int capacity)
{
if (n >= capacity)
return n;
arr[n] = key;
return (n + 1);
}
int main()
{
int arr[20] = {8, 5, 6, 9, 0, 7} ;
int capacity = sizeof(arr) / sizeof(arr[0]);
int n = 6;
int i, key = 2;
printf("\n Before Insertion: ");
for (i = 0; i < n; i++)
printf("%d  ", arr[i]);
n = insertSorted(arr, n, key, capacity);
printf("\n After Insertion: ");
for (i = 0; i < n; i++)
printf("%d  ",arr[i]);
return 0;
}
    
    
//Deleting Operation.
#include<stdio.h>
int findElement(int arr[], int n, int key);
int deleteElement(int arr[], int n, int key)
{
int pos = findElement(arr, n, key);
if (pos == - 1)
{
printf("Element not found");
return n;}
int i;
for (i = pos; i < n - 1; i++)
arr[i] = arr[i + 1];
return n - 1;
}
int findElement(int arr[], int n, int key)
{
int i;
for (i = 0; i < n; i++)
if (arr[i] == key)
return i;return - 1;
}
int main()
{
int i;
int arr[] = {1, 5, 3, 4, 2};
int n = sizeof(arr) / sizeof(arr[0]);
int key = 3;
printf("Array before deletion\n");
for (i = 0; i < n; i++)
printf("%d  ", arr[i]);
n = deleteElement(arr, n, key);
printf("\nArray after deletion\n");
for (i = 0; i < n; i++)
printf("%d  ", arr[i]);
return 0;
}
    
    
//Sorting Operation.
#include <stdio.h>
void main()
{
int i, j, a, n, number[30];
printf("Enter the value of N \n");
scanf("%d", &n);
printf("Enter the numbers \n");
for (i = 0; i < n; ++i)
scanf("%d", &number[i]);
for (i = 0; i < n; ++i)
{
for (j = i + 1; j < n; ++j)
{
if (number[i] > number[j])
{
a =  number[i];
number[i] = number[j];
number[j] = a;
}
}
}
printf("The numbers arranged in ascending order are given below \n");
for (i = 0; i < n; ++i)
printf("%d\n", number[i]);
}
