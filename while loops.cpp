#include <iostream>
using namespace std;
int main() {
  int health;
  cin >> health;
  while(health > 0) {
    cout << "robert pattinson has " << health << " hearts left\n";
    health--;
  }
  if(health == 0) {
    cout << "robbert pattinson has 0 hearts, GAME OVER";
  }
} 