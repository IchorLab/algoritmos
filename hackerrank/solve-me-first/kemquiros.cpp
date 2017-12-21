#include <stdlib.h>
#include <cstdio>
#include <iostream>
using namespace std;


int add(int a, int b) {
 return a+b;  
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1;
  cin>>num2;
  sum = add(num1,num2);
  cout<<sum;
  return 0;
}
