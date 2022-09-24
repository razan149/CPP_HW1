#include <iostream>

using namespace std;

int main()
{

   int arraySize , element , check=0;
   cout << "enter the array size"<< endl;
   cin >> arraySize;
   int Array1[arraySize];
   int Array2[arraySize];
   int finalArray[arraySize];
  for(int x=0 ; x<arraySize ; x++){
    cout << " enter element " << x << " for array1" << endl;
    cin >> element;
    Array1[x]=element;
  }
  for(int y=0 ; y<arraySize ; y++){
    cout << " enter element " << y << " for array2" << endl;
    cin >> element;
    Array2[y]=element;
  }
  for (int a=0 ; a<arraySize;a++){
    if (Array1[a]==Array2[a]){
            check += 1;
    }
    else {
        check=0;
    }
  }
  if (check == arraySize){
      cout << " the two Arrays are equal , their sum is " << endl;
    for (int b=0; b <arraySize; b++){
            finalArray[b] = Array1[b]+Array2[b];
        cout << finalArray[b] << "   ";
    }
  }
  if (check != arraySize){
      cout << " the two Arrays are not equal , their sub is " << endl;
    for (int c=0; c <arraySize; c++){
            finalArray[c] = Array1[c]-Array2[c];
        cout << finalArray[c] << "   ";
    }
  }
}
