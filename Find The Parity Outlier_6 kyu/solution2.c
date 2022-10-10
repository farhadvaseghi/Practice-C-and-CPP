#include <stdbool.h>
#include <stdlib.h>

bool is_odd(int v) {
  return v % 2 == 0;
}

int find_outlier(const int* values, size_t count) {
  char odd_count = 0;
  for (char i = 0; i < 3; ++i) {
    odd_count += is_odd(values[i]);
  }
  bool need_odd = odd_count <= 1;
  for (size_t i = 0; i < count; i += 1) {
    if (is_odd(values[i]) == need_odd) {
      return values[i];
    }
  }
}