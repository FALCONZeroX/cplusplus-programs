#include <iostream>
#include <string>
using namespace std;

// Exercise 1: Education Levels
void educationLevels() {
    int choice;
    cout << "\n=== Education Levels ===" << endl;
    cout << "1. High School" << endl;
    cout << "2. Bachelor's" << endl;
    cout << "3. Master's" << endl;
    cout << "4. Doctorate" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "High School: Secondary education typically for students aged 14-18." << endl;
            break;
        case 2:
            cout << "Bachelor's: Undergraduate academic degree awarded by colleges and universities." << endl;
            break;
        case 3:
            cout << "Master's: Graduate-level degree demonstrating mastery in a specific field." << endl;
            break;
        case 4:
            cout << "Doctorate: Highest academic degree, requiring original research and dissertation." << endl;
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 4." << endl;
    }
}

// Exercise 2: Days of the Week
void daysOfWeek() {
    int day;
    cout << "\n=== Days of the Week ===" << endl;
    cout << "Enter a number (1-7) representing a day of the week: ";
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "1. Monday - The first day of the work week." << endl;
            break;
        case 2:
            cout << "2. Tuesday - The second day of the week." << endl;
            break;
        case 3:
            cout << "3. Wednesday - The middle of the work week." << endl;
            break;
        case 4:
            cout << "4. Thursday - One day before Friday!" << endl;
            break;
        case 5:
            cout << "5. Friday - The last day of the work week." << endl;
            break;
        case 6:
            cout << "6. Saturday - Weekend! Day for relaxation." << endl;
            break;
        case 7:
            cout << "7. Sunday - Weekend! Day of rest." << endl;
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 7." << endl;
    }
}

// Exercise 3: Activities and Benefits
void activitiesBenefits() {
    int activity;
    cout << "\n=== Activities and Benefits ===" << endl;
    cout << "1. Reading" << endl;
    cout << "2. Sports" << endl;
    cout << "3. Music" << endl;
    cout << "4. Movies" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> activity;
    
    switch (activity) {
        case 1:
            cout << "Reading: Improves vocabulary, reduces stress, and enhances knowledge." << endl;
            break;
        case 2:
            cout << "Sports: Boosts physical health, improves mood, and builds teamwork skills." << endl;
            break;
        case 3:
            cout << "Music: Reduces stress, improves memory, and enhances creativity." << endl;
            break;
        case 4:
            cout << "Movies: Entertains, educates, and provides cultural insights." << endl;
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 4." << endl;
    }
}

// Exercise 4: Currency Conversion
void currencyConversion() {
    int choice;
    double amount;
    cout << "\n=== Currency Conversion ===" << endl;
    cout << "1. USD to EUR" << endl;
    cout << "2. EUR to GBP" << endl;
    cout << "3. GBP to JPY" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    cout << "Enter amount to convert: ";
    cin >> amount;
    
    switch (choice) {
        case 1:
            cout << amount << " USD = " << (amount * 0.85) << " EUR" << endl;
            break;
        case 2:
            cout << amount << " EUR = " << (amount * 0.86) << " GBP" << endl;
            break;
        case 3:
            cout << amount << " GBP = " << (amount * 151.5) << " JPY" << endl;
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 3." << endl;
    }
}

// Exercise 5: Car Types
void carTypes() {
    int carType;
    cout << "\n=== Car Types ===" << endl;
    cout << "1. Sedan" << endl;
    cout << "2. SUV" << endl;
    cout << "3. Truck" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> carType;
    
    switch (carType) {
        case 1:
            cout << "Sedan: 4-door car, good fuel efficiency, comfortable for families." << endl;
            break;
        case 2:
            cout << "SUV: Spacious, high ground clearance, suitable for various terrains." << endl;
            break;
        case 3:
            cout << "Truck: Powerful engine, large cargo capacity, ideal for heavy work." << endl;
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 3." << endl;
    }
}

// Exercise 6: Seasons from Months
void seasons() {
    int month;
    cout << "\n=== Seasons from Months ===" << endl;
    cout << "Enter a number (1-12) representing a month: ";
    cin >> month;
    
    switch (month) {
        case 12: case 1: case 2:
            cout << "Winter - Cold season with snow in many regions." << endl;
            break;
        case 3: case 4: case 5:
            cout << "Spring - Flowers bloom and temperatures rise." << endl;
            break;
        case 6: case 7: case 8:
            cout << "Summer - Hot season, perfect for vacations." << endl;
            break;
        case 9: case 10: case 11:
            cout << "Autumn - Leaves change color and temperatures drop." << endl;
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 12." << endl;
    }
}

// Exercise 7: Countries Information
void countriesInfo() {
    int country;
    cout << "\n=== Countries Information ===" << endl;
    cout << "1. USA" << endl;
    cout << "2. Canada" << endl;
    cout << "3. Mexico" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> country;
    
    switch (country) {
        case 1:
            cout << "USA: United States of America - Capital: Washington D.C., Population: ~331 million" << endl;
            break;
        case 2:
            cout << "Canada: Capital: Ottawa, Population: ~38 million, Known for maple syrup and hockey" << endl;
            break;
        case 3:
            cout << "Mexico: Capital: Mexico City, Population: ~126 million, Rich in culture and history" << endl;
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 3." << endl;
    }
}

// Exercise 8: Days in Month
void daysInMonth() {
    int month, year;
    cout << "\n=== Days in Month ===" << endl;
    cout << "Enter a number (1-12) representing a month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "This month has 31 days." << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "This month has 30 days." << endl;
            break;
        case 2:
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << "This month has 29 days (Leap Year)." << endl;
            } else {
                cout << "This month has 28 days." << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 12." << endl;
    }
}

int main() {
    int mainChoice;
    
    do {
        cout << "\n=== MAIN MENU ===" << endl;
        cout << "1. Education Levels" << endl;
        cout << "2. Days of the Week" << endl;
        cout << "3. Activities and Benefits" << endl;
        cout << "4. Currency Conversion" << endl;
        cout << "5. Car Types" << endl;
        cout << "6. Seasons from Months" << endl;
        cout << "7. Countries Information" << endl;
        cout << "8. Days in Month" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice (0-8): ";
        cin >> mainChoice;
        
        switch (mainChoice) {
            case 1: educationLevels(); break;
            case 2: daysOfWeek(); break;
            case 3: activitiesBenefits(); break;
            case 4: currencyConversion(); break;
            case 5: carTypes(); break;
            case 6: seasons(); break;
            case 7: countriesInfo(); break;
            case 8: daysInMonth(); break;
            case 0: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid choice! Please select a number between 0 and 8." << endl;
        }
        
        if (mainChoice != 0) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }
        
    } while (mainChoice != 0);
    
    return 0;
}
