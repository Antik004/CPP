#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int> nums) {
    if (nums.size() == 1) 
        return true;

    int farthest = 0;
    for (int i = 0; i <= farthest; i++) {
        farthest = max(farthest, i + nums[i]);
        if (farthest >= nums.size() - 1) return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    cout << (canJump(arr) ? "true" : "false") << endl;
}
