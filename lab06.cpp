#include <iostream>
using namespace std;

int find(int nums[], int low, int high, int obj) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == obj)
            return mid;

        if (nums[mid] > obj)
            return find(nums, low, mid - 1, obj);

        return find(nums, mid + 1, high, obj);
    }

    return -1;
}

int main() {
    int nums[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(nums) / sizeof(nums[0]);

    int obj;
    cout << "Enter the number you want to search: ";
    cin >> obj;

    int result = find(nums, 0, n - 1, obj);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the nums." << endl;

    return 0;
}
