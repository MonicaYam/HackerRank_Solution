#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
  
    for(int i = 0; i < ar.size(); ++i){
        for(int j = i+1; j < ar.size(); ++j){
            if((ar[i]+ar[j])%k==0){
                ++count;
            }
        }
    }
    return count;
}


int main()
{
  vector<int> ar={1, 3, 2, 6, 1, 2};
  int n = 6, k = 3;
  
  int result = divisibleSumPairs(n, k, ar);

  cout << result << endl;

  return 0;
}


