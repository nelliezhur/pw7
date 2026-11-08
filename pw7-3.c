#include <stdio.h>
#include <math.h>
double ct(double a, double b) {
return(sqrt(a * a + b * b));
}
int main() {
double a, b;
while(scanf("%lf %lf", &a, &b) == 2) {
printf("%.4lf\n", ct(a, b));
}
return 0;
}
