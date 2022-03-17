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
int countPairs2(int *arr, int len, int value) {
  int a = 0;
  for (int i = 0; i < len-1; i++) {
    for (int io = len-1; io > i; io--) {
      if (arr[i] + arr[io] == value) {
        a++;
      }
    }
  }
  return a;
}
int countPairs3(int *arr, int len, int value) {
    int sum = 0;
    //Бинарный поиск
    for (int i = 0; i < len-1; i++) {
        int x = i; 
        int y = len;
        int c;
        int b;
        while (x + 1 < y) {
            c = (x + y) / 2;
            if (arr[i] + arr[c] == value) {
                sum++;
                b = c + 1;
                while ((arr[i] + arr[b] == value) && (b < y)) {
                    sum++;
                    b++;
                }
                b = c - 1;
                while ((arr[i] + arr[b] == value) && (b > x)) {
                    sum++;
                    b--;
                }
                break; 
            }
        if (arr[i] + arr[c] > value)
            y = c;
        else
            x = c;
        }
    }
return sum;
}
