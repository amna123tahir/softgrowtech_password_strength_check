#include <iostream>
using namespace std;

int main() {
    string password;
    cout << "enter you password: " << endl;
    cin >> password;

    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    bool has_special = false;

    for (int i = 0; i < password.length(); i++) {

        if (password[i] >= 'A' && password[i] <= 'Z')
            has_upper = true;

        else if (password[i] >= 'a' && password[i] <= 'z')
            has_lower = true;

        else if (password[i] >= '0' && password[i] <= '9')
            has_digit = true;

        else
            has_special = true;
    }
    int score = 0;
    if (password.length() >= 8) score++;
    if (has_upper) score++;
    if (has_lower) score++;
    if (has_digit) score++;
    if (has_special) score++;
    cout << endl;
    cout << "-- password strength: ";
    if (score <= 2) cout << "Weak";
    else if (score <= 4) cout << "Medium";
    else cout << "Strong";

    cout << "-- suggestions" << endl;

    if (password.length() < 8) cout << "- Use at least 8 characters" << endl;

    if (!has_upper) cout << "- Add uppercase letters" << endl;

    if (!has_lower) cout << "- Add lowercase letters" << endl;

    if (!has_digit) cout << "- Add numbers" << endl;

    if (!has_special) cout << "- Add special characters" << endl;

    return 0;
}