# Data Types – Lesson 2

## 📘 Objective

Today, we're discussing **data types**.  
Check out the Tutorial tab on HackerRank for learning materials and an instructional video.

---

## 🎯 Task

The variables `i`, `d`, and `s` are already declared and initialized for you. You must:

1. Declare three new variables:
   - One of type **int**
   - One of type **double**
   - One of type **string**
2. Read three lines of input from **stdin** (in the order described in the Input Format section).
3. Use the `+` operator to perform the following operations:
   - Print the sum of `i` plus your **int** variable on a new line.
   - Print the sum of `d` plus your **double** variable, scaled to **one decimal place**, on a new line.
   - Concatenate `s` with the string you read as input and print the result on a new line.

> **Note**: If you're using a language that doesn't support `+` for string concatenation (like C), you can just print the strings one after another.

---

## 📥 Input Format

- The first line contains an **integer** that you must sum with `i`.
- The second line contains a **double** that you must sum with `d`.
- The third line contains a **string** that you must concatenate with `s`.

---

## 📤 Output Format

- Print the sum of both integers on the **first line**.
- Print the sum of both doubles (scaled to **1 decimal place**) on the **second line**.
- Print the concatenated string on the **third line**.

---

## ✅ Sample Input

```shell
12
4.0
is the best place to learn and practice coding!
```

## ✅ Sample Output

```shell
16
8.0
HackerRank is the best place to learn and practice coding!
```

---

## 📝 Explanation

- When we sum the integers `4` and `12`, we get `16`.
- When we sum the floating-point numbers `4.0` and `4.0`, we get `8.0`.
- When we concatenate `HackerRank ` with `is the best place to learn and practice coding!`, we get: `HackerRank is the best place to learn and practice coding!`

---

⚠️ **Important**:  
You will **not** pass this challenge if you hardcode the sample case values.  
Always read from **stdin** as instructed.
