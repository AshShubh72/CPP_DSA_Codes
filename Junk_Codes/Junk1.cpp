vector<int> moveZeros(int n, vector<int> a) {
    int j = 0; 

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }

    while (j < n) {
        a[j] = 0;
        j++;
    }

    return a;
}
