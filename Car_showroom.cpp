Yashvesh Singh 24070123138
#include <iostream>
using namespace std;

int main() {
    int brandChoice;

    cout << "Welcome to DreamDrive Car Showroom!" << endl;
    cout << "Please select a car brand to explore:" << endl;
    cout << "1. Toyota" << endl;
    cout << "2. BMW" << endl;
    cout << "3. Tesla" << endl;
    cout << "4. Hyundai" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> brandChoice;

    cout << "\nSearching showroom inventory..." << endl;

    switch (brandChoice) {
        case 1:
            cout << "\nToyota Selected:" << endl;
            cout << "- Models: Corolla, Camry, Fortuner" << endl;
            cout << "- Price Range: $20,000 – $45,000" << endl;
            cout << "- Reliable, fuel-efficient, perfect for daily driving." << endl;
            break;

        case 2:
            cout << "\nBMW Selected:" << endl;
            cout << "- Models: 3 Series, X5, M4 Coupe" << endl;
            cout << "- Price Range: $45,000 – $90,000+" << endl;
            cout << "- Luxury, performance, and cutting-edge technology." << endl;
            break;

        case 3:
            cout << "\nTesla Selected:" << endl;
            cout << "- Models: Model 3, Model Y, Model S" << endl;
            cout << "- Price Range: $38,000 – $100,000" << endl;
            cout << "- Electric vehicles with autopilot and fast charging." << endl;
            break;

        case 4:
            cout << "\nHyundai Selected:" << endl;
            cout << "- Models: i20, Creta, Tucson" << endl;
            cout << "- Price Range: $15,000 – $35,000" << endl;
            cout << "- Affordable, stylish, and packed with features." << endl;
            break;

        case 5:
            cout << "\nThank you for visiting DreamDrive Showroom. Have a great day!" << endl;
            break;

        default:
            cout << "\nInvalid choice. Please select a number between 1 and 5." << endl;
    }

    cout << "\nSimulation complete." << endl;
    return 0;
}


output:
Welcome to DreamDrive Car Showroom!
Please select a car brand to explore:
1. Toyota
2. BMW
3. Tesla
4. Hyundai
5. Exit
Enter your choice (1-5): 2

Searching showroom inventory...

BMW Selected:
- Models: 3 Series, X5, M4 Coupe
- Price Range: $45,000 – $90,000+
- Luxury, performance, and cutting-edge technology.

Simulation complete
