#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to write data to file (overwrites existing content)
void writeToFile(const string& filename) {
    ofstream file(filename); // Open file in write mode (overwrite)
    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    cout << "Enter text to write to the file: ";
    string data;
    cin.ignore(); // To clear buffer before getline
    getline(cin, data);

    file << data << endl;
    file.close();
    cout << "Data written to " << filename << endl;
}

// Function to append data to file
void appendToFile(const string& filename) {
    ofstream file(filename, ios::app); // Open file in append mode
    if (!file) {
        cout << "Error opening file for appending!" << endl;
        return;
    }

    cout << "Enter text to append to the file: ";
    string data;
    cin.ignore();
    getline(cin, data);

    file << data << endl;
    file.close();
    cout << "Data appended to " << filename << endl;
}

// Function to read and display file content
void readFromFile(const string& filename) {
    ifstream file(filename); // Open file in read mode
    if (!file) {
        cout << "Error opening file for reading or file does not exist!" << endl;
        return;
    }

    cout << "File contents:\n";
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

int main() {
    string filename = "example.txt";
    int choice;

    do {
        cout << "\nFile Handling Menu:\n";
        cout << "1. Write to File (Overwrite)\n";
        cout << "2. Append to File\n";
        cout << "3. Read from File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}