#include <iostream>
using namespace std;
class RestaurantTable{
public:
    int tableNumber;
    int capacity;
    bool isOccupied;
    static int totalTables;
    RestaurantTable() {
        tableNumber = 0;
        capacity = 4;
        isOccupied = false;
        totalTables++;
    }
    void setTableDetails(){
         cout << "Enter table number: ";
        cin >> tableNumber;
        cout << "Enter capacity: ";
        cin >> capacity;
        cout << "occupied";
        cin >> isOccupied;
    
    }
    void displayTableDetails() {
        cout << "Table Number: " << tableNumber << "\nCapacity: " << capacity << "\nIs Occupied: " << (isOccupied ? "Yes" : "No") << endl;
    }
    static void displayTotalTables() {
        cout << "Total Tables: " << totalTables << endl;
    }

};
int RestaurantTable::totalTables = 0;
int main() {
    RestaurantTable table1, table2;
    table1.setTableDetails();
    table2.setTableDetails();
    table1.displayTableDetails();
    table2.displayTableDetails();
    RestaurantTable::displayTotalTables();
    return 0;
}
