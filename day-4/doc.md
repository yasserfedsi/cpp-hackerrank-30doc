# Person Class Challenge

## Objective

In this challenge, we're going to learn about the difference between a class and an instance. Because this is an Object-Oriented concept, it's only enabled in certain languages. Check out the Tutorial tab for learning materials and an instructional video!

## Task

Write a `Person` class with an instance variable `age`, and a constructor that takes an integer `initialAge` as a parameter. The constructor must assign `initialAge` to `age` after confirming the argument passed as `initialAge` is not negative; if a negative argument is passed as `initialAge`, the constructor should set `age` to 0 and print:

```
Age is not valid, setting age to 0.
```

In addition, you must write the following instance methods:

- `yearPasses()` should increase the `age` instance variable by 1.
- `amIOld()` should perform the following conditional actions:
  - If `age < 13`, print `You are young.`
  - If `age >= 13` and `age < 18`, print `You are a teenager.`
  - Otherwise, print `You are old.`

The code that creates each instance of your `Person` class is in the main method. Don't worry if you don't understand it all quite yet!

**Note:** Do not remove or alter the stub code in the editor.

## Input Format

Input is handled for you by the stub code in the editor.

- The first line contains an integer `T` (the number of test cases), and the `T` subsequent lines each contain an integer denoting the `initialAge` of a `Person` instance.

## Constraints

- No additional constraints provided.

## Output Format

Complete the method definitions provided in the editor so they meet the specifications outlined above. If your methods are implemented correctly, each test case will print 2 or 3 lines depending on whether a valid `initialAge` was passed to the constructor.

## Sample Input

```
4
-1
10
16
18
```

## Sample Output

```
Age is not valid, setting age to 0.
You are young.
You are young.

You are young.
You are a teenager.

You are a teenager.
You are old.

You are old.
You are old.
```

## Explanation

**Test Case 0:**

- `initialAge = -1`. The code sets `age` to 0 and prints the message. Then, `amIOld()` prints "You are young." Three years pass, and `amIOld()` prints "You are young." again.

**Test Case 1:**

- `initialAge = 10`. The code prints "You are young." Three years pass, and `amIOld()` prints "You are a teenager."

**Test Case 2:**

- `initialAge = 16`. The code prints "You are a teenager." Three years pass, and `amIOld()` prints "You are old."

**Test Case 3:**

- `initialAge = 18`. The code prints "You are old." Three years pass, and `amIOld()` prints "You are old." again.

The extra line at the end of the output is required and is trimmed before being compared against the test case's expected output.
