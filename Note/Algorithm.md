# Algorithm

- Binary Search Algorithm 二分搜索算法
- Loop Invariant
  bash```
  int max(int n, const int a[]) {
    int m = a[0];
    // m equals the maximum value in a[0...0]
    int i = 1;
    while (i != n) {
        // m equals the maximum value in a[0...i-1]
        if (m < a[i])
            m = a[i];
        // m equals the maximum value in a[0...i]
        ++i;
        // m equals the maximum value in a[0...i-1]
    }
    // m equals the maximum value in a[0...i-1], and i==n
    return m;
  }
  bash```
- Two Point Method 双指针
- Sliding window Algorithm 滑动窗口
