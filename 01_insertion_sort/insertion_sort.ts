const insertionSort = (a: number[]): void => {
    const ln = a.length;
    let i: number, j: number, key: number;
    for (i = 1; i < ln; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
};

const a = [5, 2, 4, 6, 1, 3];
insertionSort(a);
console.log(a);
