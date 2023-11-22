#include <iostream>
using namespace std;

int main() {
    
     char alphabet = 'a';

  for (int j = 1; j <= 5; j++) 
  {
    for (int i = 1; i <= j; i++) 
    {
      cout <<alphabet++;
    }
    cout << endl;
  }
  return 0;
}
