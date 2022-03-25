#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) {
    int count_lowest = 0, count_highest = 0, lowest = scores[0], highest = scores[0];
    
    for(int score: scores){
        if(score < lowest){
            lowest = score;
            ++count_lowest;
        }
        
        if(score > highest){
            highest = score;
            ++count_highest;
        }
    }
    
    return vector<int> {count_highest, count_lowest};
}

int main()
{
    vector<int> scores = {10, 5, 20, 20, 4, 5, 2, 25, 1};

    vector<int> result = breakingRecords(scores);

    for (int result_score : result) {
        cout << result_score << endl;
    }

    return 0;
}

