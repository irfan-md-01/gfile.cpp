#include <iostream>
using namespace std;

long double power(double, int );
//long double power(double, long int =2);

int main() {
    double m;
    int n;
    cin >> m;
    cin >> n;
    cout << power(m, n);

long double power(double m, int n) {
    return pow(m, n);
}
  return 0;
}
