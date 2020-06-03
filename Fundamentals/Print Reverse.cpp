/*
Take N as input, Calculate it's reverse also Print the reverse.

Input Format
Constraints
0 <= N <= 1000000000

Output Format

Sample Input
123456789

Sample Output
987654321

Explanation
You've to calculate the reverse in a number, not just print the reverse.
*/

#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int rev_num = 0;
    while(N != 0) {
        
        rev_num = (rev_num * 10) + (N % 10);
        N = N / 10;
    }
    cout << rev_num << endl;
}
