#include <stdio.h>

int main() {
    int arr[100], n, change, value;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can chen (0 -> %d): ", n);
    scanf("%d", &change);
    printf("Nhap gia tri can chen: ");
    scanf("%d", &value);

    for (int i = n; i > change; i--) {
        arr[i] = arr[i - 1];
    }
    arr[change] = value;

    printf("Mang sau khi chen: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
