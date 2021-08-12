Implementation of mergeSort sorting algorithm using C programming language .

MergeSort uses divide and conquer approach to solve the problem of sorting a list of elements , by dividing the array into sub_arrays and keep doing that until the base case which is having a list of size 1 .

Then we sort the two halves of the array , then merge them.

The merge function has a time complexity O(n) in average case .

The mergeSort function has a time complexity O(logn) (log base 2 ; because it keeps spleeting the array into two halves ) 

So the algorithm has a time complexity O(n.logn)

![alt text](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif)
