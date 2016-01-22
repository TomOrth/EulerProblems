#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int tmp = 0, fibFin = 0;
  for(int i = 100; i < 999; ++i){
    for(int j = 100; j < 999; ++j){
      tmp = i*j;
      string compare = to_string(tmp);
      string rCompare = to_string(tmp);
      reverse(rCompare.begin(), rCompare.end());
      if(compare == rCompare && fibFin < tmp){
        fibFin = tmp;
      }
     }
    } 
   cout << fibFin << endl;
}
