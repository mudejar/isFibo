#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

bool isFibo(double n, vector<double> sequence) {
  // compare the number to each number to the ones in the sequence
  for (int i = 0; i < 55; i++) {
    if(n == sequence[i]) return true; 
  }
 
  return false;
}

vector<double> fib() {

  vector<double> fibNumbers(55);
  // first two numbers in a fibonacci sequence are always 0 and 1
  fibNumbers[0] = 0;
  fibNumbers[1] = 1;
  
  for(int i = 2; i < 55; i++) {
    // add the previous two numbers in the series and store it
    fibNumbers[i] = fibNumbers[i-1] + fibNumbers[i-2];
  }

  return fibNumbers;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    // number of test cases
    int numOfTestCases = 0;
    cin >> numOfTestCases;

    // array of test cases
    double testCases[numOfTestCases];

    //int maxDigitLength = 0;
    for (int i = 0; i < numOfTestCases; i++) {
      cin >> testCases[i];
    }

    vector<double> fibonacciSequence(fib()); // array with fibonacci sequence

    // call recursive fibo function to determine if each test case
    // is part of the fibonacci sequence
    for (int i = 0; i < numOfTestCases; i++) {
      if (isFibo(testCases[i], fibonacciSequence)) {
        cout << "IsFibo" << endl;
      } else {
        cout << "IsNotFibo" << endl;
      }
    }

    return 0;
}

