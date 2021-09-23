#include <stdio.h>
#include <time.h> 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
 void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
  
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
// Driver program to test above functions
int main()
{
   int n;
   printf("enter array size");
   scanf("%d", &n);
   int arr[n];
   printf("enter array elements");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    clock_t t1;
    t1=clock();
    selectionSort(arr, n);
    t1=clock()-t1;
    clock_t t2;
    t2=clock();
    bubbleSort(arr, n);
    t2=clock()-t2;
    double time_taken_bubblesort = ((double)t2)/CLOCKS_PER_SEC; 
    double time_taken_selectionsort = ((double)t1)/CLOCKS_PER_SEC; 
   printf("bubblesort() took %f seconds to execute \n", time_taken_bubblesort);
   printf("selectionsort() took %f seconds to execute \n", time_taken_selectionsort);
    return 0;
}