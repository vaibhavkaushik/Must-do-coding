// This question is not that troublesome as it looks when u first see it.. 
/*
smart observation and u are done.. the main concept used here is that we start from both begining and end
marking the highest value that we encounter on left and on right on every index
then we take min of these values of max_left and max_right.. after this we just take the diff btwn 
the ith element and the min that we found.. if arr[i] - min(left_max[i],right_max[i]) is <0 then ignore

// C++ program to find maximum amount of water that can
// be trapped within given set of bars.
#include<bits/stdc++.h>
using namespace std;
 
int findWater(int arr[], int n)
{
    // left[i] contains height of tallest bar to the
    // left of i'th bar including itself
    int left[n];
 
    // Right [i] contains height of tallest bar to
    // the right of ith bar including itself
    int right[n];
 
    // Initialize result
    int water = 0;
 
    // Fill left array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
       left[i] = max(left[i-1], arr[i]);
 
    // Fill right array
    right[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
       right[i] = max(right[i+1], arr[i]);
 
    // Calculate the accumulated water element by element
    // consider the amount of water on i'th bar, the
    // amount of water accumulated on this particular
    // bar will be equal to min(left[i], right[i]) - arr[i] .
    for (int i = 0; i < n; i++)
       water += min(left[i],right[i]) - arr[i];
 
    return water;
}
