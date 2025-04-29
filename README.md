# Assignment-CSC-461
# Array Category Demonstration - Akash

This project demonstrates four types of array memory management using both **C++** and **JavaScript**, with implementations under the name "Akash".

---

## 📌 Categories Explained

### 1. Fixed Dynamic
- **Definition**: Arrays with a fixed size defined at compile-time or runtime.
- **C++**: `int arr[3] = {11, 22, 33};`
- **JavaScript**: `let arr = new Array(3);` *(less strict in enforcing size)*

### 2. Stack Dynamic
- **Definition**: Arrays created inside a function, using stack memory, and deallocated automatically.
- **C++**: `int arr[] = {1, 2, 3};` inside a function (stack-allocated)
- **JavaScript**: Arrays declared inside a function scope, e.g., `let arr = [1, 2, 3];`

### 3. Fixed Heap Dynamic
- **Definition**: Fixed-size arrays allocated on the heap at runtime.
- **C++**: `int* arr = new int[4];`
- **JavaScript**: Simulated by fixed-length use of `Array`

### 4. Heap Dynamic
- **Definition**: Arrays that can grow or shrink during runtime.
- **C++**: `vector<int> arr;`
- **JavaScript**: `let arr = []; arr.push(...); arr.pop();`

---

## 🔍 Comparison Table: JavaScript vs C++

| Category           | Description                                  | JavaScript Example                      | C++ Example                                |
|--------------------|----------------------------------------------|------------------------------------------|---------------------------------------------|
| Fixed Dynamic      | Fixed-size array, size known in advance      | `let arr = new Array(3);`               | `int arr[3];`                                |
| Stack Dynamic      | Array allocated in function stack memory     | `let arr = [1, 2, 3];` inside function   | `int arr[] = {1, 2, 3};` inside function     |
| Fixed Heap Dynamic | Heap-allocated fixed-size array              | `let arr = [5, 10, 15];` (simulated)    | `int* arr = new int[4];`                    |
| Heap Dynamic       | Dynamically resizable array on heap          | `arr.push(100); arr.pop();`             | `vector<int> arr; arr.push_back(100);`      |

---


