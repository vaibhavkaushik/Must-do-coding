#include <bits/stdc++.h>
using namespace std;

/* The concept is pretty easy... we try to maintain the max element yet encountered for every index less than 'i' so that 
we can check with the ith element that if it is max of all.. consequently making all elements b4 it less than itself..

we also mantain the min element yet encountered from right so that we can compare it with the ith element to conclude that our ith
element is smallest among those and consequently proving all elements after it are greater than itself. 
*/


int findElement(int arr[], int n)
{
    // leftMax[i] stores maximum of arr[0..i-1]
    int leftMax[n];
    leftMax[0] = INT_MIN;
 
    // Fill leftMax[]1..n-1]
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i-1], arr[i-1]);
 
    // Initialize minimum from right
    int rightMin = INT_MAX;
 
    // Traverse array from right
    for (int i=n-1; i>=0; i--)
    {
        // Check if we found a required element
        if (leftMax[i] < arr[i] && rightMin > arr[i])
             return i;
 
        // Update right minimum
        rightMin = min(rightMin, arr[i]);
    }
 
    // If there was no element matching criteria
    return -1;
}
 
