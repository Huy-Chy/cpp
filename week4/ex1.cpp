#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter 5 students' names and scores:" << endl;
    for (int i = 0; i < 5; i++) {
        string name;
        int score;
        cout << "Student " << i + 1 << " name: ";
        cin >> name;
        cout << "Student " << i + 1 << " score: ";
        cin >> score;
        outFile << name << " " << score << endl;
    }
    outFile.close();

    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nContents of " << filename << ":" << endl;
    string name;
    int score;
    while (inFile >> name >> score) {
        cout << name << " " << score << endl;
    }
    inFile.close();

    return 0;
}