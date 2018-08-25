#include <bits/stdc++.h>
using namespace std;
 
//we are using much of a binary search concept by droppping elements from list
that do not end up as given sum..  we need to sort the array also.

//we can also do this in O(n) but for that we need to maintain a hash
which will increase space complexity. If some -ve numbers arrive then in
that case we can add the abs val of smallest -ve number.



bool hasArrayTwoCandidates(int A[], int arr_size,
                                         int sum)
{
    int l, r;
 
    /* Sort the elements */
    sort(A, A + arr_size);
 
    /* Now look for the two candidates in 
       the sorted array*/
    l = 0;
    r = arr_size - 1; 
    while (l < r)
    {
        if(A[l] + A[r] == sum)
            return 1; 
        else if(A[l] + A[r] < sum)
            l++;
        else // A[i] + A[j] > sum
            r--;
    } 
    return 0;
}
