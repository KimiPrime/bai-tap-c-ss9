#include <stdio.h>

int main() {
    int arr[100], n, index, newValue;

    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri muon sua (1 -> %d): ", n);
    scanf("%d", &index);

    if (index < 1 || index > n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[index - 1] = newValue;

    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
