/*

Alternate positive and negative elements
Problem Description
Given an array of integers A, arrange them in an alternate fashion such that every non-negative number is followed by negative and vice-versa, starting from a negative number, maintaining the order of appearance. The number of non-negative and negative numbers need not be equal. If there are more non-negative numbers they appear at the end of the array. If there are more negative numbers, they too appear at the end of the array. Note: Try solving with O(1) extra space.   


Problem Constraints
1 <= length of the array <= 7000
-109 <= A[i] <= 109


Input Format
The first argument given is the integer array A.


Output Format
Return the modified array.


Example Input
Input 1:
 A = [-1, -2, -3, 4, 5]
Input 2:
 A = [5, -17, -100, -11]
  


Example Output
Output 1:
 [-1, 4, -2, 5, -3]
Output 2:
 [-17, 5, -100, -11]
  


Example Explanation
Explanation 1:
A = [-1, -2, -3, 4, 5]
Move 4 in between -1 and -2, A => [-1, 4, -2, -3, 5]
Move 5 in between -2 and -3, A => [-1, 4, -2, 5, -3]

*/

vector<int> Solution::solve(vector<int> &A) {
    
    //Aproach 1 
    //using extra spaces
    //copy the vector to another vector and if you observe negative numbers should be placed at even index 
    //and positive numbers at odd index
    
    //Take 3 vectors
    vector<int> pos,neg,ans(A.size());
    
    for(int i = 0; i < A.size(); ++i) {
        if(A[i] < 0) {
            neg.push_back(A[i]);
        }
        else {
            pos.push_back(A[i]);
        }
    }
    
    //take 2 pointers i.e. one to iterate neg array and other to iterate over pos array
    
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < pos.size() && j < neg.size()) {
        ans[k++] = neg[j++];
        ans[k++] = pos[i++];
    }
    
    while( i < pos.size() ){
        ans[k++] = pos[i++];
    }
    
    while(j < neg.size()){
        ans[k++] = neg[j++];
    }
    
    return ans;
    
    
    
    
    //Approach 2
    //Without using extra space we have to solve it using right rotation -->come later and solve this againd
    
}
