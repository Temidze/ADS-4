// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int a = 0;
  for (int i = 0; i < len-1; i++) {
    for (int io = i+1; io < len; io++) {
      if (arr[i] + arr[io] == value) {
        a++;
      }
    }
  }
  return a;
}
  return 0;
}
int countPairs2(int *arr, int len, int value) {
  
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
}
