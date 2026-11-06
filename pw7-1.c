#include <stdio.h>
int main() {
int n;
while((n = getchar()) != EOF) {
  if(n != '\n') {
    putchar(n);
    putchar(n);
  }
  else {
    putchar(n);
  }
}
return 0;
}
