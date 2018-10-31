#include <stdio.h> 
 
int binarySearch(int a[], int l, int r, int x) { 
   if (r >= l) { 
        int mid = l + (r - l)/2; 
        if (a[mid] == x)   
            return mid; 
        if (a[mid] > x)  
            return binarySearch(a, l, mid-1, x); 
  
        return binarySearch(a, mid+1, r, x); 
   } 
   return -1; 
} 
  
int main() { 
   int a[] = {2, 3, 4, 5, 6}; 
   int n = sizeof(a)/ sizeof(a[0]); 
   int index = binarySearch(a, 0, n-1, 5); 
   (index == -1)? printf("Not found") : printf("Found at at index %d", index); 
   return 0; 
} 
