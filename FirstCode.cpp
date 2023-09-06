// Example program
#include <iostream>
#include <string>
#include <math.h>

int main()
{
 int a = 3;
 double b = 0.501;
 double result = 0;
 
 double first = pow(pow((a-b), 2) * pow(sin (1 - a/b), 2) * pow(M_PI / 6, 2) * pow(cos (1 - b/a), 2), 1./3);
 double second = 0.701 * pow(log(a - b), 2);
 
 double result = first/second;
 
 std::cout << result;
}
