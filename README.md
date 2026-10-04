# DSA Progress 🚀

[![Sync Leetcode](https://github.com/SparshJindal/DSA-Progress/actions/workflows/sync_leetcode.yml/badge.svg)](https://github.com/SparshJindal/DSA-Progress/actions/workflows/sync_leetcode.yml)

Automated logging repository tracking my Data Structures and Algorithms progress and problem solutions from LeetCode.

---

## 📌 Solved Problems

| # | Problem | Difficulty | Language | Solution |
|---|---|---|---|---|
| 0001 | [Two Sum](./0001-two-sum/) | Easy | C++ | [solution.cpp](./0001-two-sum/solution.cpp) |
| 0007 | [Reverse Integer](./0007-reverse-integer/) | Medium | C++ | [solution.cpp](./0007-reverse-integer/solution.cpp) |
| 0013 | [Roman to Integer](./0013-roman-to-integer/) | Easy | C++ | [solution.cpp](./0013-roman-to-integer/solution.cpp) |
| 0036 | [Valid Sudoku](./0036-valid-sudoku/) | Medium | C++ | [solution.cpp](./0036-valid-sudoku/solution.cpp) |
| 0070 | [Climbing Stairs](./0070-climbing-stairs/) | Easy | C++ | [solution.cpp](./0070-climbing-stairs/solution.cpp) |
| 0125 | [Valid Palindrome](./0125-valid-palindrome/) | Easy | C++ | [solution.cpp](./0125-valid-palindrome/solution.cpp) |
| 0128 | [Longest Consecutive Sequence](./0128-longest-consecutive-sequence/) | Medium | C++ | [solution.cpp](./0128-longest-consecutive-sequence/solution.cpp) |
| 0191 | [Number of 1 Bits](./0191-number-of-1-bits/) | Easy | C++ | [solution.cpp](./0191-number-of-1-bits/solution.cpp) |
| 0217 | [Contains Duplicate](./0217-contains-duplicate/) | Easy | C++ | [solution.cpp](./0217-contains-duplicate/solution.cpp) |
| 1331 | [Rank Transform of an Array](./1256-rank-transform-of-an-array/) | Easy | C++ | [solution.cpp](./1256-rank-transform-of-an-array/solution.cpp) |
| 1281 | [Subtract the Product and Sum of Digits of an Integer](./1406-subtract-the-product-and-sum-of-digits-of-an-integer/) | Easy | C++ | [solution.cpp](./1406-subtract-the-product-and-sum-of-digits-of-an-integer/solution.cpp) |

---

## ⚙️ Automated Sync Setup & Maintenance

This repository utilizes [`joshcai/leetcode-sync`](https://github.com/joshcai/leetcode-sync) to automatically pull accepted submissions from LeetCode.

### Why does the sync fail periodically?
LeetCode periodically expires session cookies (`LEETCODE_SESSION` & `LEETCODE_CSRF_TOKEN`) for security reasons (typically every 2 weeks or after logging out). When this occurs, GitHub Actions fails with the following error:
```
TypeError: response.data.data.submissionList.submissions is not iterable
```

### 🔄 How to refresh your tokens:
1. Log in to [LeetCode](https://leetcode.com).
2. Open Developer Tools in your browser (`F12` or Right Click ➔ **Inspect**).
3. Navigate to **Application** (Chrome/Brave/Edge) or **Storage** (Firefox) ➔ **Cookies** ➔ `https://leetcode.com`.
4. Copy the values of:
   - `LEETCODE_SESSION`
   - `csrftoken`
5. In this GitHub repository:
   - Go to **Settings** ➔ **Secrets and variables** ➔ **Actions**.
   - Update `LEETCODE_SESSION` with the copied session cookie.
   - Update `LEETCODE_CSRF_TOKEN` with the copied `csrftoken` cookie.
6. Trigger the workflow manually:
   - Go to the **Actions** tab ➔ **Sync Leetcode** ➔ **Run workflow**.

### 🔐 Repository Permissions:
Ensure GitHub Actions has permission to write changes to your repo:
1. Go to **Settings** ➔ **Actions** ➔ **General**.
2. Under **Workflow permissions**, choose **Read and write permissions**.
3. Click **Save**.
