#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <unistd.h> // sleep()

using namespace std;

vector<string> pkgmanagers = {"yay", "pacman"};

void install_package() {
    int choice1;
    cout << "\n[ INSTALL PACKAGES ]\n";
    cout << "1. YAY\n";
    cout << "2. Pacman\n";
    cout << "Choose: ";
    cin >> choice1;

    if (choice1 == 1 || choice1 == 2) {
        string package;
        cout << "[ PACKAGE INSTALL ]\n";
        cout << "Package name: ";
        cin >> package;
        string command = pkgmanagers[choice1 - 1] + " -S " + package;
        system(command.c_str());
    } else {
        cout << "Invalid choice.\n";
    }
}

void clear_cache() {
    cout << "[ CLEARING PACMAN CACHE ]\n";
    system("sudo pacman -Scc");
}

void reboot_system() {
    cout << "[ REBOOTING SYSTEM... ]\n";
    sleep(1);
    system("reboot");
}

int main() {
    int operation;

    cout << "[=== TRYPIC CV ===]\n";
    cout << "Type an operation:\n";
    cout << "1. Clear Pacman cache\n";
    cout << "2. Reboot\n";
    cout << "3. Install Packages (Arch only)\n";
    cout << "[==================]\n";
    cout << "Choose option: ";
    cin >> operation;

    switch (operation) {
        case 1:
            clear_cache();
            break;
        case 2:
            reboot_system();
            break;
        case 3:
            install_package();
            break;
        default:
            cout << "Invalid option.\n";
    }

    return 0;
}
