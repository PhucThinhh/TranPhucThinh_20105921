#include <stdio.h>

void nhapMang(int a[], int n) {
    if (n == 0) {
        return;
    }

    nhapMang(a, n - 1);
    printf("Nhap phan tu thu %d: ", n);
    scanf("%d", &a[n - 1]);
}

void xuatMang(int a[], int n) {
    if (n == 0) {
        return;
    }

    xuatMang(a, n - 1);
    printf("%d ", a[n - 1]);
}

int tongMang(int a[], int n) {
    if (n == 0) {
        return 0;
    }

    return tongMang(a, n - 1) + a[n - 1];
}

int tongChan(int a[], int n) {
    if (n == 0) {
        return 0;
    }

    if (a[n - 1] % 2 == 0) {
        return tongChan(a, n - 1) + a[n - 1];
    }

    return tongChan(a, n - 1);
}

int demDuong(int a[], int n) {
    if (n == 0) {
        return 0;
    }

    if (a[n - 1] > 0) {
        return demDuong(a, n - 1) + 1;
    }

    return demDuong(a, n - 1);
}

int maxMang(int a[], int n) {
    if (n == 1) {
        return a[0];
    }

    int maxN_1 = maxMang(a, n - 1);
    return a[n - 1] > maxN_1 ? a[n - 1] : maxN_1;
}

int minMang(int a[], int n) {
    if (n == 1) {
        return a[0];
    }

    int minN_1 = minMang(a, n - 1);
    return a[n - 1] < minN_1 ? a[n - 1] : minN_1;
}

int timChanCuoi(int a[], int n) {
    if (n == 0) {
        return -1; 
    } else if (a[n-1] % 2 == 0) {
        return n-1;
    } else {
        return timChanCuoi(a, n-1); 
    }
}

int timViTriCuoi(int a[], int n, int x) {
    if (n == 0) {
        return -1;
    }

    int viTri = timViTriCuoi(a, n - 1, x);
    if (viTri == -1 && a[n - 1] == x) {
        return n - 1;
    }

    return viTri;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    nhapMang(a, n);

    printf("Mang vua nhap: ");
    xuatMang(a, n);
    printf("\n");

    printf("Tong cac phan tu cua mang: %d\n", tongMang(a, n));
    printf("Tong cac phan tu chan cua mang: %d\n", tongChan(a, n));

printf("So phan tu duong trong mang: %d\n", demDuong(a, n));

printf("Phan tu lon nhat cua mang: %d\n", maxMang(a, n));

printf("Phan tu nho nhat cua mang: %d\n", minMang(a, n));

int viTriChanCuoi = timChanCuoi(a, n);
if (viTriChanCuoi == -1) {
    printf("Khong co phan tu chan trong mang\n");
} else {
    printf("Phan tu chan cuoi cung trong mang: %d, vi tri: %d\n", a[viTriChanCuoi], viTriChanCuoi);
}

int x;
printf("Nhap gia tri can tim kiem: ");
scanf("%d", &x);

int viTriX = timViTriCuoi(a, n, x);
if (viTriX == -1) {
    printf("Khong tim thay gia tri %d trong mang\n", x);
} else {
    printf("Gia tri %d xuat hien cuoi cung trong mang o vi tri %d\n", x, viTriX);
}

return 0;
}

