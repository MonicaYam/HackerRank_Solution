#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


// GCD: The greatest common divisor
// Use Euclidean Algorithm
// When a < b, a % b == a. Thus, gcd(b, a%b)
int gcd(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

//LCM: The least common multiple
int lcm(int a, int b){
  return (a*b) / gcd(a, b);
}

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
    int lcm_num = a[0], gcd_num = b[0], mod_num = 0, result = 0;
    
    for(int num : a){
        lcm_num = lcm(lcm_num,num);
    }
    
    for(int num : b){
        gcd_num = gcd(gcd_num, num);
    }
    
    while (mod_num <= gcd_num) {
        mod_num += lcm_num;

        // Count the number of factor for array a and b
        if (gcd_num % mod_num == 0){
            result++;
        }
    }
    
    return result;
}

int main()
{
  vector<int> arr = {2,4};
  vector<int> brr = {16,32,96};  
   
  int total = getTotalX(arr, brr);

  cout << total << endl;
  
  return 0;
}
