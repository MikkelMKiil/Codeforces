/*
================================================================================
                        PROBLEM: Remove Smallest (1339A)
================================================================================

PROBLEM STATEMENT:
  Given an array of n positive integers. In one move, you can choose two 
  indices i and j (i ≠ j) such that |a[i] - a[j]| ≤ 1 and remove the smaller 
  element. If equal, remove either one.
  
  Determine if it's possible to reduce the array to a single element.

KEY INSIGHT:
  - You can only remove an element if there's another element with absolute
    difference ≤ 1 from it
  - Think about which elements can never be removed

CONSTRAINTS:
  - t test cases (1 ≤ t ≤ 1000)
  - 1 ≤ n ≤ 50 (array length)
  - 1 ≤ a[i] ≤ 100 (element values)

INPUT FORMAT:
  Line 1: t (number of test cases)
  For each test case:
    Line 1: n (array length)
    Line 2: n space-separated integers a[1]...a[n]

OUTPUT FORMAT:
  For each test case, print "YES" or "NO"

EXAMPLE:
  Input:  [2, 3, 1, 5]
  Output: NO (element 5 is isolated, element 1 is isolated)

================================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // YOUR CODE HERE
    
    return 0;
}
