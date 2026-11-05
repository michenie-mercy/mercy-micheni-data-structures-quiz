#include<iostream>
using namespace std;

int main(){
int arr[10] = {10,20,30,40,50};
int size = 5
int position = 2
  // shift elementto the left
  for (int i = position; i< size -1; i++){
  arr[i] = arr [i+1];

  //reduce array size
  size --
  cout << "Array after deletion: ";

  for (int i = 0; i<size; i++){
  cout << arr[i]<< "";
  }
  return 0;
    }
