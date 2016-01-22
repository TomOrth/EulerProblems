#include<iostream>
using namespace std;
int main(){
  bool isNotDiv = true;
  int ans = 21;
  while(isNotDiv){
  bool tmpState = false;
  for(int i = 1; i <= 20; ++i){
    if(ans % i == 0){
      tmpState = true;
    }
    else{
      tmpState = false;
      ++ans;
      break;
    }
  } 
  if(tmpState){
    isNotDiv = false;
  }
  
 }
 cout << ans << endl;
}
