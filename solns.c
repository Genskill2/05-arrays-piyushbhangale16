/* Enter your solutions in this file */
#include <stdio.h>
#include <limits.h>

// max
int max(int arr[], int n) { 
  int ans = INT_MIN;
  for(int i=0; i<n; i++) {
    if(arr[i] > ans)
      ans = arr[i];
  }
  return ans;
}

//min
int min(int arr[], int n) {
  int ans = INT_MAX;
  for(int i=0; i<n; i++) {
    if(arr[i] < ans)
      ans = arr[i];
  }
  return ans;
}


