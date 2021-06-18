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
  int ans,maxCount=INT_MIN;

 	for(int i=0; i<n; i++)
 	{
 		int count=0;
 		for(int j=0; j<n; j++)
 		{
 			if(arr[j] == arr[i])
 			count++;
 		}
 		if(count > maxCount)
 		{
 			maxCount = count;
 			ans = arr[i];
 		}
 	}
 	return maxValue;
}

//prime factor
int isPrime(int n) {
    for(int i=2; i<=n/2; i++) {
        if(n == 2)
            return 1;
        if(n%i == 0)
            return 0;
    }
    return 1;
} 

int factors(int n, int arr[]) {
    int ans = 0; 
    for(int i=2; i<=n; i++) {
        while(n%i == 0) {
            if(n == 0) {
                break;
            }
            if(isPrime(i) == 1) {
                arr[ans] = i;
                ans++;
            }
            n /= i;
        }
    }

    return ans;
}
