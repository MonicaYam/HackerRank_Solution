#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
    int idx;
    // store all types' total
    vector<int> total={0,0,0,0,0};
    
    for (int type : arr) {
        if (type == 1){
            total[0]++;
        }else if (type == 2){ 
            total[1]++;
        }else if (type == 3){
            total[2]++;
        }else if (type == 4){ 
            total[3]++;
        }else if (type == 5){
            total[4]++;
        }
    }
    
    // If element number is duplicate, it returns early element index.
    idx = std::max_element(total.begin(), total.end()) - total.begin();

    // index + 1 = type number
    return idx + 1;
}

int main()
{
    vector<int> arr = {1, 4, 4, 4, 5, 3}
    int result = migratoryBirds(arr);

    cout << result << endl;


    return 0;
}
