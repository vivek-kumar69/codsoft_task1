# 🎯 Number Guessing Game (C++)

A simple console-based **Number Guessing Game** developed in **C++** as part of the **CODSOFT C++ Programming Internship**.

In this game, the computer randomly generates a number between **1 and 100**, and the player has to guess it. After each guess, the program provides feedback indicating whether the guessed number is **too high** or **too low**. The game continues until the correct number is guessed, after which the total number of attempts is displayed.

---

## 📌 Features

- 🎲 Random number generation
- 🔢 User-friendly console interface
- 📈 Too High / Too Low hints
- 🏆 Counts total attempts
- 🔄 Play Again option
- ✅ Input validation for numbers between 1 and 100

---

## 🛠️ Technologies Used

- C++
- Visual Studio Code
- GCC / MinGW Compiler

---

## 📂 Project Structure

```
Number_Guessing_Game/
│
├── Number_Guessing_Game.cpp
└── README.md
```

---

## ▶️ How to Run

### Clone the repository

```bash
git clone https://github.com/your-username/Number_Guessing_Game.git
```

### Open the project

Open the project folder in **Visual Studio Code** or any C++ IDE.

### Compile the program

```bash
g++ Number_Guessing_Game.cpp -o game
```

### Run the program

**Windows**

```bash
game.exe
```

**Linux / macOS**

```bash
./game
```

---

## 🎮 Sample Output

```text
=====================================
      NUMBER GUESSING GAME
=====================================
I have selected a number between 1 and 100.
Try to guess it!

Enter your guess: 40
Too Low!

Enter your guess: 80
Too High!

Enter your guess: 65
Too High!

Enter your guess: 55
Too Low!

Enter your guess: 60

Congratulations! You guessed the correct number.
Total Attempts: 5

Do you want to play again? (Y/N): N

Thank you for playing!
```

---

## 💡 Concepts Used

- Variables and Data Types
- User Input and Output
- Conditional Statements (`if-else`)
- Loops (`while` and `do-while`)
- Random Number Generation (`rand()` and `srand()`)
- Functions from `<cstdlib>` and `<ctime>`
- Problem Solving

---

## 🎯 Learning Outcomes

Through this project, I learned how to:

- Generate random numbers in C++
- Implement game logic using loops and conditions
- Handle user input efficiently
- Validate user input
- Build an interactive console application

---

## 🚀 Internship

This project was completed as **Task 1** of the **CODSOFT C++ Programming Internship**, focusing on strengthening fundamental C++ programming skills through hands-on project development.

---

## 👨‍💻 Author

**Vivek Kumar**

B.Tech Student | KIIT University

Passionate about C++, Problem Solving, and Software Development.

---

## ⭐ Support

If you found this project helpful, consider giving the repository a **Star ⭐**.
