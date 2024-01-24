#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t;
  scanf("%ld", &t);
  while (t) {
    long K;
    long N;
    scanf("%ld %ld", &N, &K);

    long buff[N];
    for (int i = 0; i < N; i++) {
      scanf("%ld", &buff[i]);
    }
    long food = 0;
    long max = buff[0];
    long index_max = 0;
    while (K) {
      for (long i = 0; i < N; i++) {
        if (max < buff[i]) {
          max = buff[i];
          index_max = i;
        }
      }
      food += max;
      K--;
      buff[index_max] = buff[index_max] / 2;
      max = buff[0];
      index_max = 0;
    }
    printf("%ld", food);
    t--;
  }
  return 0;
}