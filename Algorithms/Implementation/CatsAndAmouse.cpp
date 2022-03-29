#include <bits/stdc++.h>

using namespace std;

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {  
    string winner="";
    // Caluculate each cat's distance to mouse
    int cat_a = abs(x-z), cat_b = abs(y-z);
    
    if(cat_a < cat_b){
        winner="Cat A";
    }else if(cat_a > cat_b ){
        winner="Cat B";
    }else{
        //mouse escapes!
        winner="Mouse C";
    }
    
    return winner;
}

int main()
{
  int x=1,y=3,z=2;
  string result = catAndMouse(x, y, z);
  cout << result << endl;

  return 0;
}
