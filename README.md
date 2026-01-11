# Linear Array Position Finder

This project implements a standard **Linear Search (Sequential Search)** algorithm in C. It is designed to scan a static dataset and identify the specific rank (position) of a target integer provided by the user.

## ⚙️ Algorithm Logic

The program operates on a fixed dataset $S$:
`S = { 10, 15, 20, 33, 22, 11, 9, 8, 48, 47, 12, 25, 12, 21 }`

For a target value $T$, the algorithm iterates through indices $i = 0 \to n-1$:

1.  **Comparison:** Checks if $S[i] == T$.
2.  **Position Mapping:** If a match is found, converts the zero-based index ($i$) to a human-readable ordinal number ($i+1$).
3.  **Flag Management:** Uses a boolean flag logic (`x`) to track search success.
    * If the loop completes with `x == 0`, the element is reported as missing.

### Complexity
* **Time Complexity:** $O(n)$ - Checks each element sequentially.
* **Space Complexity:** $O(1)$ - Uses constant extra memory.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o position_finder
    ```
2.  Run the executable:
    ```bash
    ./position_finder
    ```
3.  **Input:** Enter a number (e.g., `48`).
4.  **Output:** `Aranan sayi bastan 9. sirada bulunmaktadir.`

---
*This repository demonstrates array traversal and conditional logic in C.*
