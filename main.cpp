#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    double a, b, c;
    
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);

    cout << setprecision(2) << fixed;

    if (root1 > root2)
        cout << root1 << " " << root2;
    else
    cout << root2 << " " << root1;
    
    return 0;
}
