#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right];
    int i = left;

    for (int j = left; j < right; ++j) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

int quickSelect(vector<int>& arr, int left, int right, int k, int &partitionCount) {
    if (left <= right) {
        partitionCount++;  
        int pivotIndex = partition(arr, left, right);

        if (pivotIndex == k)
            return arr[pivotIndex];
        else if (pivotIndex > k)
            return quickSelect(arr, left, pivotIndex - 1, k, partitionCount);
        else
            return quickSelect(arr, pivotIndex + 1, right, k, partitionCount);
    }
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int partitionCount = 0;
    int result = quickSelect(arr, 0, n - 1, k - 1, partitionCount);

    cout << result << " " << partitionCount - 1 << endl;

    return 0;
}
