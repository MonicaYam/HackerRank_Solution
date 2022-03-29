#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int level = 0, valleys = 0;
    for(char c : path){
        if(c=='U'){
            ++level;
            if(level == 0){
                ++valleys;
            }
        }else if(c=='D'){
            --level;
        }
    }
    
    return valleys;
}

int main()
{
    int steps = 8;
    string path="UDDDUDUU";

    int result = countingValleys(steps, path);

    cout << result << endl;


    return 0;
}

