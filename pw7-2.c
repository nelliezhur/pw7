#include <stdio.h>
#include <ctype.h>
int main() {
unsigned int n;
int i = 0, i1 = 0, i2 = 0, c = 0;
while((n = getchar()) != EOF) {
  if('0' <= n && n <= '9') {
    i++;
  }
  else if('a' <= n && n <= 'f') {
    i1++;
  }
  else if('A' <= n && n <= 'F') {
    i2++;
  }
  c++;
}
printf("1-9: %d\na-f: %d\nA-F: %d\nTotal: %d\n", i, i1, i2, c);
return 0;
}
