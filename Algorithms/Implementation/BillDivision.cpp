#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */

void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i < bill.size(); ++i){
        if(i != k){
            sum += bill[i];
        }
    }
    
    sum /= 2;
    
    if(sum == b){
        cout << "Bon Appetit" << endl;
    }else{
        cout << b - sum << endl;
    }
    
}

int main()
{
  vector<int>bill = {3, 10, 2, 9};
  int k = 1, b = 12;

  bonAppetit(bill, k, b);

  return 0;
}
