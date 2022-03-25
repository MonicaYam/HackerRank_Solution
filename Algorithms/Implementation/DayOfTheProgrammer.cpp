#include <bits/stdc++.h>

using namespace std;

// Check the yar is leap year or not.
// Return true, if the year is leap year
bool isLeapYear(int year){
    bool result = false;
    if(year < 1918 && year%4 == 0){
        //Julian Calender
        result = true;
    }else if(year > 1918 && (year % 400 == 0 || ( year % 4==0 && year % 100 !=0))){
        //Gregorian Carender
        result = true;
    }
    
    return result;
}
/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    string date = "";
  
    if(year == 1918){
        //add 14 because 1918's Jan 31st's next day is Feb 14th
        date = "26.09." + to_string(year);    
    }else if(isLeapYear(year)){        
        date = "12.09." + to_string(year);
    }else{
        date = "13.09." + to_string(year);
    }
    
    return date;
}



int main()
{
    int year = 1918;

    string result = dayOfProgrammer(year);

    cout << result << endl;

    return 0;
}
