#include <unistd.h>
#include <iostream>

const double accel = .5;

using namespace std;

int main() {
  double current = 0;
  int target;
  cin >> target;
  while (current < target) {
    usleep(100000);
    if (current < target - 2) {
      current += accel;
      cout << current << "\n";
    }
  }
}
