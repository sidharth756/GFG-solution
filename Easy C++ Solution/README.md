<div align="center">

# Easy C++ Solution

![Platform](https://img.shields.io/badge/Platform-GeeksForGeeks-2f8d46?style=flat-square&logo=geeksforgeeks&logoColor=white) ![Language](https://img.shields.io/badge/Language-Java-58a6ff?style=flat-square) ![Difficulty](https://img.shields.io/badge/Difficulty-Medium-d29922?style=flat-square) ![Status](https://img.shields.io/badge/Status-Accepted-2ea043?style=flat-square&logo=checkmarx&logoColor=white)

</div>

---

## 📊 Details

| Attribute | Value |
|-----------|-------|
| Difficulty    | Medium  |
| Accuracy      | 44.26%    |
| Submissions   | 304K+ |
| Points        | 4      |
| Average Time  | 30m |
| Language      | Java    |
| Link          | [View on GFG](https://www.geeksforgeeks.org/problems/find-length-of-loop/1) |

## 📝 Problem Description

Given the head of a linked list, determine whether the list contains a loop. If a loop is present, return the number of nodes in the loop, otherwise return 0. Note: Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null, indicating there is no loop. Note that pos is not passed as a parameter.

### 🔢 Examples

**Input:**
```
 pos = 2, 
```
**Output:**
```
 4 
```
**Explanation:**
 There exists a loop in the linked list and the length of the loop is 4. 
**Input:**
```
 pos = 3, 
```
**Output:**
```
 3 
```
**Explanation:**
 The loop is from 19 to 10. So length of loop is 19 → 33 → 10 = 3. 
**Input:**
```
 pos = 0, 
```
**Output:**
```
 0 
```
**Explanation:**
 There is no loop.

### 📌 Constraints

```
1 ≤ number of nodes ≤ 105 1 ≤ node->data ≤ 104 0 ≤ pos < number of nodes
```

---

## ✅ Solution

> 📄 See full solution: [Easy C++ Solution.java](./Easy C++ Solution.java)

```java
// Solution is in Easy C++ Solution.java
```

---

<div align="center">
<sub>Auto-pushed by <a href="https://github.com/sidharth756/GFG-Hub"><strong>GFGHub</strong></a> &nbsp;·&nbsp; Made by <a href="https://github.com/sidharth756">sidharth756</a> &nbsp;|&nbsp; Tue, 10 Mar 2026 09:44:00 GMT</sub>
</div>