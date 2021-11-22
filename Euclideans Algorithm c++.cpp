#include <iostream>
#include <time.h>
using namespace std;
int gcd(int x, int y) {
for(int i = 100; i >= 0; i--)
if ( x % i == 0 && y % i == 0 ) 
 
  cout << "gcd is " << i << endl;

}
int main() {
  int x, y;
 cout <<"Enter two integers: ";
  if (!(cin >> x >> y)) {
    cout << "Please enter only integers" << endl;
  }
  else  {
    gcd(x, y);
    
  
}
return (0);
}

  





