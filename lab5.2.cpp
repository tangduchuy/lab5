#include <iostream>
using namespace std;

// Hàm ngh?ch ??o chu?i s? d?ng con tr?
void reverseString(char* str) {
    int length = strlen(str);
    char* begin_ptr = str; // Con tr? ban ??u tr? ??n ??u chu?i
    char* end_ptr = str + length - 1; // Con tr? cu?i tr? ??n cu?i chu?i
    char ch;

    // Hoán ??i ký t? t? ??u và cu?i chu?i s? d?ng con tr?
    while (begin_ptr < end_ptr) {
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        // C?p nh?t v? trí con tr?
        begin_ptr++;
        end_ptr--;
    }
}

int main() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.getline(str, 100);

    // G?i hàm ngh?ch ??o chu?i
    reverseString(str);

    cout << "Chuoi sau khi nghich dao: " << str << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
