#include <iostream>
using namespace std;

int main() {
    
  for (int j = 1; j <= 5; j++) 
  {
    char alphabet = 'a';

    for (int i = 1; i <= j; i++) 
    {
      cout <<alphabet++;
    }
    cout << endl;
  }
  return 0;
}
