# 🎲 AniNa Sort Algorithm

A **chaotic shuffle-based sorting algorithm** written in C. It sorts by repeatedly shuffling until the smallest element of the current subarray *happens* to land in the right place.


## ⚙️ How It Works

1. Start at index `pos = 0`.
2. Shuffle the subarray `[pos..n-1]` i.e, Fisher-Yates Shuffle.
3. If the element at `pos` is the **true minimum** of that subarray, lock it in.
4. Otherwise, reshuffle and try again.
5. Move to the next index and repeat until the array is sorted.


## 📊 Complexity

- **Per position**:  
  - Shuffle cost = `O(n - pos)`  
  - Finding true minimum = `O(n - pos)`  
  - Expected number of shuffles ≈ `(n - pos)`  

  ⮕ Total = `O((n - pos)²)`  

- **Overall (Worst Case)**: `O(n³)`
- **Space**: `O(1)`


## 🚀 Build & Run

```bash
gcc anina_sort.c -o anina_sort
./anina_sort
```

---

_Written and Compiled with ❤️ by Anirudh_
