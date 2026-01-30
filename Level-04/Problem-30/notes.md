Here is the step-by-step trace of every iteration for **`n = 3`**.

### 1. Initialization

Before the loop starts:

* **Input (`n`):** `3`
* **`fact`:** Initialized to `1`

---

### 2. Loop Execution (Trace Table)

The loop runs for `counter` = 1, 2, and 3.

#### **Iteration 1 (`counter = 1`)**

| Step | Logic | Memory State |
| --- | --- | --- |
| **Check** | Is `1 <= 3`? **TRUE**. | `fact: 1`, `counter: 1` |
| **Calc** | `fact = fact * counter` → `1 * 1` | `fact` becomes **1** |
| **Update** | `counter++` | `counter` becomes **2** |

#### **Iteration 2 (`counter = 2`)**

| Step | Logic | Memory State |
| --- | --- | --- |
| **Check** | Is `2 <= 3`? **TRUE**. | `fact: 1`, `counter: 2` |
| **Calc** | `fact = fact * counter` → `1 * 2` | `fact` becomes **2** |
| **Update** | `counter++` | `counter` becomes **3** |

#### **Iteration 3 (`counter = 3`)**

| Step | Logic | Memory State |
| --- | --- | --- |
| **Check** | Is `3 <= 3`? **TRUE**. | `fact: 2`, `counter: 3` |
| **Calc** | `fact = fact * counter` → `2 * 3` | `fact` becomes **6** |
| **Update** | `counter++` | `counter` becomes **4** |

---

### 3. Termination

The loop checks the condition one last time.

* **Check:** Is `4 <= 3`?
* **Result:** **FALSE**.
* **Action:** The loop stops.

### 4. Final Result

The function returns **`6`**.

Would you like to try tracing a **nested loop** next (like a multiplication table)?