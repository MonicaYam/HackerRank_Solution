#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m) {
    int result = 0, count = 0, sum = 0, j = 0;
    for(int i=0; i <= s.size(); ++i){
        sum=0;
        count=0;
        j=i;
        
        while(count != m){
            if (j <= s.size()) {
                sum = sum + s[j++]; 
            }
            ++count;
        }
        
        if(sum == d){
            ++result;
        }
    }
    
    return result;
}

int main()
{
    vector<int> s={1, 2, 1, 3, 2};
    int d = 3, m = 2;

    int result = birthday(s, d, m);

    cout << result << endl;


    return 0;
}

