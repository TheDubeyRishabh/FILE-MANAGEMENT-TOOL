# FILE-MANAGEMENT-TOOL
*COMPANY *: CODTECH IT SOLUTIONS

*NAME *: RISHABH DUBEY

*INTERN ID *:CT12VUU

"DOMAIN *: C++ PROGRAMING

"DURATION *: 8 WEEEKS

*MENTOR *: NEELA SANTOSH


*DESCRIOTON

Introduction
A File Management Tool is a fundamental software utility that allows users to create, read, modify, and manage files efficiently. In this project, we have developed a C++ program that provides basic file handling operations, enabling users to store, update, and retrieve text-based data from files.

This tool is designed to offer three core functionalities:

Writing to a file (Overwrite Mode)
Appending data to an existing file
Reading data from a file
The primary objective of this program is to provide an easy-to-use menu-driven interface where users can interact with files without requiring manual file handling in an operating system. It is particularly useful for students, developers, and anyone looking to understand file handling concepts in C++.

Features of the File Management Tool
This console-based application allows users to manage files through a simple interface. Below are its key features:

1️⃣ Write to File (Overwrite Mode)
This operation erases any existing content in the file and writes new data.
The user is prompted to enter text, which is stored in the file.
If the file does not exist, it is automatically created.
This function is useful when users want to replace old data with new information.
2️⃣ Append Data to File
This operation allows users to add new content to the file without deleting the existing data.
The user enters additional text, which is then appended at the end of the file.
This feature is useful for maintaining logs, notes, or records.
3️⃣ Read from File
This function displays the file’s content to the user.
If the file does not exist, an error message is shown.
The content is displayed line by line, making it easy to read.
This feature is essential for retrieving and reviewing stored information.
4️⃣ Exit Program
The user can safely terminate the program using this option.
It ensures the program exits without data loss or unexpected behavior.
Technical Details
1. File Handling Operations in C++
The program makes use of the C++ file handling features provided by the <fstream> library. It works with three main file streams:

ofstream → Used to write or append data to a file.
ifstream → Used to read data from a file.
fstream → A combination of ofstream and ifstream.
Each function in the program follows a structured approach to handle files properly:
✔ Opens the file safely before performing operations.
✔ Closes the file after each operation to prevent corruption.
✔ Checks if a file exists before attempting to read from it.
✔ Handles input errors gracefully instead of crashing.

2. User Input Handling
The program uses getline(cin, data); to take multi-word user input.
It uses cin.ignore(); to prevent buffer issues when switching between cin >> choice; and getline().
It properly validates user choices, ensuring invalid inputs do not crash the program.
3. Menu-Driven Approach
The program presents a simple menu to the user.
It runs inside a do-while loop, allowing the user to repeatedly perform operations.
The program continues execution until the user chooses to exit.
Use Cases of the File Management Tool
This tool can be used in a variety of real-life applications, such as:

✔ Personal Notes & Journals – Save personal notes and append new thoughts.
✔ Data Logging – Maintain log files to track events or activities.
✔ Basic Text Storage – Store and manage text-based information.
✔ Student Learning Tool – Helps students learn C++ file handling concepts.

Error Handling & Improvements
The program ensures a smooth user experience with error handling mechanisms:

*Invalid Input Handling – Prevents users from entering non-numeric values.
* File Existence Check – Displays a message if a file does not exist.
* Proper File Closing – Avoids data corruption and memory leaks.

Future Enhancements
* Support for multiple files – Allow users to choose filenames dynamically.
* File deletion option – Implement a feature to delete files if necessary.
* Search functionality – Let users search for specific words or phrases.
* Password Protection – Add encryption for security.

Conclusion
The File Management Tool is a simple yet effective C++ application that demonstrates the power of file handling operations. With its write, append, and read functions, users can efficiently store and manage text-based information.
##  OUTPUT ##
![Image](https://github.com/user-attachments/assets/5d8ea62c-e5e0-43bf-ba44-d3dad630d1d5)
