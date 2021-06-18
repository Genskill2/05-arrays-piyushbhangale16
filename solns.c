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

//average
float average(int arr[], int n) {
  int sum = 0, ans;
  for(int i=0; i<n; i++) {
    sum += arr[i];
  }
  ans = (float)sum/n;
  
  return ans;
}

//mode
int mode(int arr[], int n) {
  int idx = INT_MIN, a[n] = {0}, ans = 0;
  for(int i=0; i<n; i++) {
    a[arr[i]]++;
  }
  
  for(int i=0; i<n; i++) {
    if(a[i] > idx) {
      idx = a[i];
      ans = i;
    }
  }
  
  return ans;
}


