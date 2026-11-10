#include <stdio.h>
double sa(double *a, double *b) {
  *a = *b = (*a + *b) / 2.0;
}
int main() {
double c;
double d;
scanf("%lf %lf", &c, &d);
printf("%lf %lf\n", c, d);
sa(&c, &d);
printf("%lf\n", c);
return 0;
}
