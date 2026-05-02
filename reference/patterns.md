CSES 1084, Appartments.
Signal: Two arrays, match elements with a delta k, maximize pairings
Idea: Sort both, two points(two arrays), walk forward conditionally, 3 way conditional, equal, less, larger
Trap: for loop intuitive, but wrong, delta k == (abs(a - b) <= k)