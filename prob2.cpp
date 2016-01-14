#include<iostream>
#include<vector>
using namespace std;

int main(){
  unsigned long long sum = 2, term1 = 1, term2 = 2, tmp = 0;
  bool isTerm1 = true;
  while(tmp <= 4000000){
    tmp = term1 + term2;
    if(tmp % 2 == 0){
      sum += tmp;
    }
    if(isTerm1){
     term1 = tmp;
     isTerm1 = false;
    }
    else{
     term2 = tmp;
     isTerm1 = true;
    }
    
  }
  cout << sum << endl;

}
