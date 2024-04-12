#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define inf 0x7fffffff
#define SIZE 100000
FILE *file;
void swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}
void merge(int *arr, int start, int mid, int end) {
  int L[mid - start + 2], R[end - mid + 1];
  L[mid - start + 1] = R[end - mid] = inf;
  for (int i = start; i <= mid; i++) {
    L[i - start] = arr[i];
  }
  for (int i = mid + 1; i <= end; i++) {
    R[i - mid - 1] = arr[i];
  }

  int i = 0, l = 0, r = 0;
  for (int i = start; i <= end; i++) {
    if (L[l] < R[r]) {
      arr[i] = L[l];
      l++;
    } else {
      arr[i] = R[r];
      r++;
    }
  }
}
void mergesort(int *arr, int start, int end) {
  if (end == start) {
    return;
  }
  int mid = (end + start) / 2;
  mergesort(arr, start, mid);
  mergesort(arr, mid + 1, end);
  merge(arr, start, mid, end);
}
void quicksort(int *arr, int start, int end) {
  if (end - start < 2) {
    return;
  }

  int pivot = start;
  int lower = end - 1, higher = start + 1;
  while (1) {
    while (higher < end && arr[higher] <= arr[pivot]) {
      higher++;
    }
    while (lower > start && arr[lower] >= arr[pivot]) {
      lower--;
    }
    if (lower < higher) {
      swap(&arr[pivot], &arr[lower]);
      pivot = lower;
      break;
    }
    if (higher >= end || lower <= start) {
      break;
    }
  }
  quicksort(arr, start, pivot);
  quicksort(arr, pivot + 1, end);
}
void runmergesort(int *arr, int len, FILE *file) {
  int temp[len];
  for (int i = 0; i < len; i++) {
    temp[i] = arr[i];
  }

  clock_t time = clock();
  mergesort(temp, 0, len - 1);
  time = clock() - time;
  double tme = (double)time / CLOCKS_PER_SEC;
  fprintf(file, "%lf,", tme);
}
void runquicksort(int *arr, int len) {
  int temp[len + 1];
  for (int i = 0; i < len; i++) {
    temp[i] = arr[i];
  }
  clock_t time = clock();
  temp[len] = inf;
  quicksort(temp, 0, len);
  time = clock() - time;
  double tme = (double)time / CLOCKS_PER_SEC;
  fprintf(file, "%lf,", tme);
}
void runquicksortworst(int *arr, int len) {
  int temp[len + 1];
  for (int i = 0; i < len; i++) {
    temp[i] = arr[i];
  }
  clock_t time = clock();
  temp[len] = inf;
  quicksort(temp, 0, len);

  time = clock() - time;
  double tme = (double)time / CLOCKS_PER_SEC;
  fprintf(file, "%lf\n", tme);
}

int main() {
  if (fopen("input.txt", "r") == NULL) {
    srand(time(NULL));
    file = fopen("input.txt", "w");
    for (int i = 0; i < SIZE; i++) {
      fprintf(file, "%d\n ", rand());
    }
    fclose(file);
  }
  file = fopen("input.txt", "r");
  int arr[SIZE];
  for (int i = 0; i < SIZE; i++) {
    fscanf(file, "%d ", &arr[i]);
  }
  int best_case_merge[SIZE];
  int worst_case_quick[SIZE];
  int worst_case_merge[SIZE];
  for (int i = 0; i < SIZE; i++) {
    best_case_merge[i] = i + 1;
    worst_case_quick[SIZE - i - 1] = i + 1;
  }

  for (int i = 0; i < SIZE / 2; i++) {
    worst_case_merge[i] = 2 * i + 1;
  }
  for (int i = SIZE / 2; i < SIZE; i++) {
    worst_case_merge[i] = 2 * (i - SIZE / 2 + 1);
  }
  fclose(file);
  file = fopen("Exp_2_timings.csv", "w");
  fprintf(file, "merge sort best case,merge sort average case, merge sort "
                "worst case,quick sort average case, quick sort worst case \n");
  for (int i = 1000; i <= SIZE; i += 1000) {
    runmergesort(best_case_merge, i, file);
    runmergesort(arr, i, file);
    runmergesort(worst_case_merge, i, file);
    // runquicksort(arr, i);
    // runquicksortworst(worst_case_quick, i);
  }
  fclose(file);
  return 0;
}
