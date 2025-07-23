#include <iostream>
using namespace std;

void CheckUserPermissionAccess() {
  // Simulate a decision-making process
    int permission = 1; // Simulated value based on cmp and mov logic
    if (permission == 1) {
        cout << "Permission granted: Admin access." << endl;
    } else {
        cout << "Permission granted: User access." << endl;
    }
}

void DisplayInfo() {
    cout << "Displaying client information..." << endl;
}

void ChangeCustomerChoice() {
    int choice = 3; // Simulated user choice
    if (choice == 1) {
        cout << "Viewing account summary." << endl;
    } else if (choice == 2) {
        cout << "Updating contact info." << endl;
    } else if (choice == 3) {
        cout << "Managing investments." << endl;
    } else if (choice == 4) {
        cout << "Contacting support." << endl;
    } else if (choice == 5) {
        cout << "Logging out." << endl;
    }
}

int main() {
  // Required output statement
    cout << "Created by Takhmina - SNHU Proficiency Test" << endl;

  // Start application logic
    CheckUserPermissionAccess();

    int status = 1; // simulate a state that controls what happens next

    if (status == 1) {
        DisplayInfo();
    } else if (status == 2) {
        ChangeCustomerChoice();
    } else if (status == 3) {
        return 0;
    } else {
        CheckUserPermissionAccess();
    }

    return 0;
}

