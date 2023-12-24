#include <iostream>

/*
                        Q. next Permutation

                    explanation -  we will be given an array - arr[] = {3, 1, 2}
                                    and we have to find next permutation of this particular array
                                we know that 3 digit nmbr has 3! = 6 permutations, but for this question we have
                                to write all the permutations in sorted order (as 123 < 132 < 213 < 231 < 312 < 321)

                                from the question we know that {3, 1, 2} is in the 5th position of the sorted order
                                and we have to find the next permutation which is {3, 2, 1}

                                if in the question last permutation is given then we to return the first order
                                i.e,  {3, 2, 1} next permutation > {1, 2, 3}

                Brute force -  1. generate all the possible permutations in sorted order (by using recursion)
                               2. linear search to find the array in the question
                               3. next index

                               TC - O(N! * N)
                                    if length of array is 5 then O(120 * 5)
                                    if it is 15 then - O(10^12)     which is extremely high complexity, so we will not 
                                    be doing brute force

                Better sol -  we will be using STL

                Optimal sol -  arr[] = {2, 1, 5, 4, 3, 0, 0}
                             1. longer prefix match
                                    breakpoint -> a[i] < a[i+1]
                             2. find element > 1, but the smallest one so that it get close
                             3. try to place the remaining in sorted order (in increasing)

                             by above process we will get ->  {2, 3, 0, 0, 1, 4, 5},  which is the next permutation

        Pseudo code
// longer prefix match
ind = -1;                               // if(ind == -1)
for(i=n-2; i>=0; i--)                   //     rev(arr)
{
    if(a[i] < a[i+1])
    {
        ind = i;
        break;
    }
}

// find element > 1
for(i=n-1; i>ind; i--)
{
    if(arr[i] > arr[ind])
    {
        swap(arr[i], arr[ind])
        break;
    }
}

//  try to place the remaining in sorted order
rev(arr, ind+1, n-1)


        Actual code
vector<int> nextGreaterPermutation(vector<int> &A)
{
    int ind = -1;
    int n = A.size();
    for(int i = n - 2; i >= 0; i--)
    {
        if(a[i] < A[i + 1])
        {
            int = i;
            break;
        }
    }
    if(ind == -1)
    {
        reverse(A.begin(), A.end());
        return A;
    }

    for(int i = n - 1; i > ind; i--)
    {
        if(a[i] > A[ind])
        {
            swap(A[i], A[ind]);
            break;
        }
    }

    reverse(A.begin() + ind + 1, A.end());
    return A;
}


                    TC - O(3N)
                    SC - O(1)
*/

int main()
{
    std::cout << "Hello World!\n";
}