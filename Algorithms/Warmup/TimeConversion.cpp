#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string ampm = s.substr(s.length() - 2);
    s.erase(s.length()-2);
    if(ampm == "PM"){
        int hour = stoi(s.substr(0,2));
        if(hour != 12){            
            hour+=12;
        }
        s.replace(0,2,to_string(hour));
    }else if(stoi(s.substr(0,2)) == 12){ //12am       
        s.replace(0,2,"00");
    }
    
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
