#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool isPrime(int num);
const unsigned long long target = 600851475143;
int factor = 0;
vector<unsigned long>primes;
int main(){
  primes.push_back(2);
  for(unsigned long long i = 3; i < target; i+=2){
    if(target % i == 0 && isPrime(target/i)){
      if(factor < i){
        factor = i;
     }
    }
    cout << i << endl;
  }
  cout << factor << endl;

}
bool isPrime(int num){
  for(int j = 2; j < sqrt(num); ++j){
    if(num % j == 0){
      return false;
    }
  }
  return true;

}
