// Given an integer array of size N. Write Program to find sum of positive
// square elements in the array.
#include <iostream>
using namespace std;
void square(int arr[], int size) {
  int k = 0;
  for (int i = 0; i < size; i++) {
    k += arr[i] * arr[i];
  }
  cout << k;
}

int main() {
  // std::cout << "Hello World!\n";
  int arr[] = {1, 2, 3, 4};
  int size = 4;
  square(arr, size);
}