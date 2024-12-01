#include <stdio.h>

int main() {
    int arr[100], n, index;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Nhap vi tri muon xoa (1 -> %d): ", n);
    scanf("%d", &index);
    if (index < 1 || index > n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    for (int i = index - 1; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;  

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
