# Day 01 — How a Computer Stores Data

## Today I Learned:
* **Memory as Storage:** Computers use **RAM** like a massive warehouse of labeled boxes.
* **Variables:** These are the **labels** on the boxes. They give us a way to find and use data stored in memory.
* **Data Types:** Not every box holds the same thing. Some hold integers (numbers), some hold strings (text), and others hold booleans (True/False).
* **The Workflow:** 
    1. **Assignment:** Putting a value into the box (`x = 10`).
    2. **Expression:** Performing "math" or logic on those values (`x + 5`).
    3. **Output:** Bringing the result out of the box to show the user (`print`).

---

## The Real-World Analogy
| Component | Analogy | Function |
| :--- | :--- | :--- |
| **RAM** | The Warehouse | Where all the boxes are kept. |
| **Variable** | The Label | Tells the computer *which* box to open. |
| **Value** | The Item | The actual data inside the box. |
| **CPU** | The Worker | The one who moves items and calculates results. |

---

## Logic & Pseudo-code: Adding Two Numbers
To solve the problem of adding two user-provided numbers, the logic follows these steps:
1. **Input:** Capture text from the user.
2. **Cast:** Convert that text (string) into a number (integer).
3. **Process:** Add the two integers together.
4. **Output:** Display the final sum.

---

## Python Implementation (simpler)
```python
# If you want to run without typing each time, use:
num1 = 5
num2 = 3
print("Sum is:", num1 + num2)
```