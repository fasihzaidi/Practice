//#include <iostream>
//#include <conio.h>
//using namespace std;
//void max_heap(int* a, int m, int n)
//{
//    int j, t;
//    t = a[m];
//    j = 2 * m;
//    while (j <= n) {
//        if (j < n && a[j + 1] > a[j])
//        {
//            j = j + 1;
//        }
//        if (t > a[j])
//        {
//            break;
//        }
//        else if (t <= a[j])
//        {
//            a[j / 2] = a[j];
//            j = 2 * j;
//        }
//    }
//    a[j / 2] = t;
//    return;
//}
//void build_maxheap(int* a, int n)
//{
//    int k;
//    for (k = n / 2; k >= 1; k--)
//    {
//        max_heap(a, k, n);
//    }
//}
//void min_heap(int* a, int m, int n) {
//    int j, t;
//    t = a[m];
//    j = 2 * m;
//    while (j <= n) {
//        if (j < n && a[j + 1] < a[j])
//            j = j + 1;
//        if (t < a[j])
//            break;
//        else if (t >= a[j]) {
//            a[j / 2] = a[j];
//            j = 2 * j;
//        }
//    }
//    a[j / 2] = t;
//    return;
//}
//void build_minheap(int* a, int n) {
//    int k;
//    for (k = n / 2; k >= 1; k--) {
//        min_heap(a, k, n);
//    }
//}
//void swap(int* a, int* b)
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void heapify(int arr[], int n, int i)
//{
//    int largest = i;
//    int left = 2 * i + 1;
//    int right = 2 * i + 2;
//    if (left < n && arr[left] > arr[largest])
//    {
//        largest = left;
//    }
//    if (right < n && arr[right] > arr[largest])
//    {
//        largest = right;
//    }
//    if (largest != i) 
//    {
//        swap(&arr[i], &arr[largest]);
//        heapify(arr, n, largest);
//    }
//}
//void heapSort(int arr[], int N)
//{
//    for (int i = N / 2 - 1; i >= 0; i--)
//    {
//    heapify(arr, N, i);
//     }
//    for (int i = N - 1; i >= 0; i--)
//    {
//        swap(&arr[0], &arr[i]);
//        heapify(arr, i, 0);
//    }
//}
//void printArray(int arr[], int N)
//{
//    for (int i = 0; i < N; i++)
//       cout<< arr[i];
//    cout << endl;
//}
//int main()
//{
//    int n, i;
//    cout << "enter no of elements of array";
//    cin >> n;
//    int a[30];
//    for (i = 1; i <= n; i++)
//    {
//        cout << "enter elements" << " " << (i) << endl;
//        cin >> a[i];
//    }
//    build_maxheap(a, n);
//    cout << "Max Heap ";
//    for (i = 1; i <= n; i++)
//    {
//     cout << a[i] << endl;
//    }
//
//    build_minheap(a, n);
//    cout << "Min Heap ";
//        for (i = 1; i <= n; i++) 
//        {
//            cout << a[i] << endl;
//        }
//        cout << endl;
//        heapify(a, n, i);
//        cout << "sorting" << heapSort << endl;
//        cout << printArray;
//        cout << endl;
//        cout << "Sorted array is";
//         heapSort(a, n);
//}
