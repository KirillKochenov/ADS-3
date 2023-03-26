// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int l = 0, r = size - 1;
    int count = 0;
    int mid = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        if (arr[mid] == value) {
            count++;
            for (int j = mid; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            l = 0;
            r -= 1;
        } else if (value > arr[mid]) {
            l = mid + 1;
        } else if (value < arr[mid]) {
            r = mid - 1;
        }
    }
    return 0; // если ничего не найдено
}
