#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int p);

int main(){
  int index = 2, prime = 3;
  while(index != 10001){
    ++prime;
    if(isPrime(prime)){
      ++index;     
    }
 }
 cout << prime << endl;
}
bool isPrime(int p){
  for(int i = 2; i < p; ++i){
    if(p % i == 0){
      return false;
    }
  }
  return true;

}
