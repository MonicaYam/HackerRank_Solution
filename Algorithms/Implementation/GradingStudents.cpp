#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    int multiple_num = 5, round_num = 0, grade=0;
    
    for(int i=0; i < grades.size(); ++i){
        int grade = grades[i];
        //round(grade/multiple)*multiple:
        //Get the number of previous multiple of num
        //+multiple_num needs to get the next of multiple of num
        round_num = (round(grade/multiple_num) * multiple_num) + multiple_num;
        if(grade > 37 && (round_num - grade) < 3){
            grades[i]=round_num;
        }     
    }
    
    return grades;
}

int main()
{
  vector<int> grades = {4, 73, 67, 38, 33};
  
  vector<int> result = gradingStudents(grades);

  for (size_t i = 0; i < result.size(); i++) {
      cout << result[i];

     
  }

  return 0;
}


