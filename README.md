## ✅ Q1: Code for Calculating Numbers Using `switch-case`

---

### 🎯 Aim:

To write a C++ program that performs **Addition, Subtraction, Multiplication, and Division** using a `switch-case` statement.

---

### 📚 Theory:

The `switch-case` decision-making statement is used to select one option from multiple conditions. It's often used when there are multiple constant options to evaluate against a variable.

---

### 💡 Syntax:

```cpp
switch (operator) {
    case '+': // addition
    case '-': // subtraction
    ...
    default:  // invalid input
}
```

---

### 🧠 Logic:

1. Take two numbers and an operator as input.
2. Use `switch-case` to match the operator and perform the corresponding arithmetic operation.
3. Display the result.
4. Handle divide-by-zero and invalid operator cases.

---

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operator!";
    }

    return 0;
}
```

---

### ✅ Sample Output:

```
Enter first number: 10
Enter operator (+, -, *, /): *
Enter second number: 5
Result: 50
```

---

### 📌 Conclusion:

The program successfully performs arithmetic operations using the `switch-case` decision-making structure.

---

## ✅ Q2: Code for Checking Whether a Number is Even or Odd

---

### 🎯 Aim:

To write a C++ program to check whether a given number is **even** or **odd** using `if-else`.

---

### 📚 Theory:

* A number is **even** if it is divisible by 2.
* A number is **odd** if it is not divisible by 2.
  This is determined using the modulus operator `%`.

---

### 💡 Syntax:

```cpp
if (num % 2 == 0)
    cout << "Even";
else
    cout << "Odd";
```

---

### 🧠 Logic:

1. Input an integer.
2. Use modulus operator `%` to check the remainder when divided by 2.
3. If remainder is 0 → even, else → odd.

---

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "The number is Even.";
    else
        cout << "The number is Odd.";

    return 0;
}
```

---

### ✅ Sample Output:

```
Enter a number: 7
The number is Odd.
```

---

### 📌 Conclusion:

The program checks whether a number is even or odd using a simple `if-else` decision-making construct.

---

## ✅ Q3: Code to Check Whether a Character is a Vowel or Consonant

---

### 🎯 Aim:

To write a C++ program to check whether an input alphabet is a **vowel** or **consonant**.

---

### 📚 Theory:

In English, **vowels** are: A, E, I, O, U (both uppercase and lowercase).
All other alphabets are **consonants**.

---

### 💡 Syntax:

```cpp
if (ch == 'a' || ch == 'A' || ...)
    cout << "Vowel";
else
    cout << "Consonant";
```

---

### 🧠 Logic:

1. Input a character.
2. Use a series of `if` or `switch` statements to check if it matches any of the vowels.
3. If not, and if it’s an alphabet, it is a consonant.

---

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    // Check for vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a Vowel.";
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a Consonant.";
    } else {
        cout << "Invalid input! Please enter an alphabet.";
    }

    return 0;
}
```

---

### ✅ Sample Output:

```
Enter an alphabet: E
E is a Vowel.
```

---

### 📌 Conclusion:

The program correctly identifies whether an entered character is a vowel or a consonant.

---

## ✅ Q4: Code to Find the Largest Number Among Three Numbers

---

### 🎯 Aim:

To write a C++ program to find the **largest number** among three given numbers using nested `if-else`.

---

### 📚 Theory:

The comparison of three numbers can be done using logical and relational operators. The `if-else` construct allows multiple condition checks.

---

### 💡 Syntax:

```cpp
if (a > b && a > c)
    cout << "a is largest";
else if (b > c)
    cout << "b is largest";
else
    cout << "c is largest";
```

---

### 🧠 Logic:

1. Take three numbers as input.
2. Compare them using `if-else if-else` to find the maximum.
3. Display the largest number.

---

### 🧾 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "The largest number is: " << a;
    else if (b >= a && b >= c)
        cout << "The largest number is: " << b;
    else
        cout << "The largest number is: " << c;

    return 0;
}
```

---

### ✅ Sample Output:

```
Enter three numbers: 25 88 61
The largest number is: 88
```

---

### 📌 Conclusion:

The program accurately identifies the largest of three input numbers using multiple `if-else` conditions.

---
