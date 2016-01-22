#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool isPrime(int num);
unsigned long long target = 600851475143;
int currentFactor = 2, highestFactor = 0;
int main(){
  while(target != 1){
    if(target % currentFactor == 0){
      if(highestFactor < currentFactor){
        highestFactor = currentFactor;
      }
      target /= currentFactor;
        currentFactor = 2;
      }
      else{
        ++currentFactor;
      }
  }
  cout << highestFactor << endl;

}
