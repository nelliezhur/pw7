#include <stdio.h>
unsigned long long pell(int n) {
  if(n == 0) {
    return 0;
  }
  else if(n == 1) {
    return 1;
  }
  else {
    return(2 * pell(n - 1) + pell(n - 2));
  }
}
int main() {
int n;
unsigned long long n1 = 1;
unsigned long long n0 = 0;
unsigned long long p = 0;
scanf("%d", &n);
if(n >= 2) {
  for(int i = 2; i <= n; i++) {
    p = 2 * n1 + n0;
    n0 = n1;
    n1 = p;
  }
}
else if(n == 0) {
  p = 0;
}
else {
  p = 1;
}
printf("%llu\n", p);
printf("%llu\n", pell(n));
return 0;
}
