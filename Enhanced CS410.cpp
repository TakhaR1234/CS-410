#include <iostream>
#include <string>
#include <limits>

using namespace std;

// User class to store user permission level
class User {
private:
    int permissionLevel;

public:
    User() {
        permissionLevel = getPermissionInput();
    }

    int getPermissionLevel() const {
        return permissionLevel;
    }

private:
    int getPermissionInput() {
        int level;
        cout << "Enter your permission level (1 for Admin, 2 for User): ";
        while (!(cin >> level) || (level != 1 && level != 2)) {
            cout << "Invalid input. Please enter 1 (Admin) or 2 (User): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        return level;
    }
};

// Menu class to manage choices
class Menu {
public:
    void showMenu() {
        cout << "\nMenu Options:" << endl;
        cout << "1. View Account Summary" << endl;
        cout << "2. Update Contact Info" << endl;
        cout << "3. Manage Investments" << endl;
        cout << "4. Contact Support" << endl;
        cout << "5. Log Out" << endl;
    }

    void handleChoice() {
        int choice = getChoiceInput();

        switch (choice) {
            case 1:
                cout << "Viewing account summary." << endl;
                break;
            case 2:
                cout << "Updating contact info." << endl;
                break;
            case 3:
                cout << "Managing investments." << endl;
                break;
            case 4:
                cout << "Contacting support." << endl;
                break;
            case 5:
                cout << "Logging out." << endl;
                break;
            default:
                cout << "Unknown option selected." << endl;
                break;
        }
    }

private:
    int getChoiceInput() {
        int choice;
        cout << "Enter your choice (1-5): ";
        while (!(cin >> choice) || choice < 1 || choice > 5) {
            cout << "Invalid input. Please enter a number between 1 and 5: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        return choice;
    }
};

// Main function
int main() {
    cout << "Created by Takhmina - SNHU Proficiency Test (Enhanced Version)" << endl;

    // Create User object
    User user;

    // Check permission
    if (user.getPermissionLevel() == 1) {
        cout << "Permission granted: Admin access." << endl;

        // Display client information
        cout << "Displaying client information..." << endl;

        // Show menu and handle choice
        Menu menu;
        menu.showMenu();
        menu.handleChoice();

    } else {
        cout << "Permission granted: User access." << endl;
        cout << "Access denied: Admin permissions required to view client information." << endl;
    }

    cout << "Program terminated." << endl;
    return 0;
}
