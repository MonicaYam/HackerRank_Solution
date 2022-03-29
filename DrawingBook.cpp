#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
  // p/2 : turn a page from the first
  // n/2 - p/2 :  turn a page from the last.
  return min(p/2, (n/2)-(p/2));
}

int main()
{
    int n = 6, p = 2;

    int result = pageCount(n, p);

    cout << result << endl;
    return 0;
}

