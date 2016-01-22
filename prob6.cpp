#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int sumSquare = 0, squareSum = 0;
  for(int i = 1; i <= 100; ++i){
    sumSquare += pow(i, 2);
    squareSum += i; 
  }
  squareSum = pow(squareSum, 2);
  cout << squareSum - sumSquare << endl;
}
