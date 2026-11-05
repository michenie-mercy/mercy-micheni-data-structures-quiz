#include <iostream>
using namespace std;
int main(){

   int arr [10] = {10,20,30,40,50};
   int size = 5;
   int position = 4;
   int value = 45;

   //shift element to the right
   for (int i = size; i > position; i--){
   arr[i] = arr [i-1];
   }

   // insert new value
   arr[position] = value;
   size ++;
   //display the array
   cout << "Array after insertion: ";

   for (int i = 0; i <size; i++){
     cout << arr [i] << " ";
   }
   cout<<endl;

   return 0;
}
