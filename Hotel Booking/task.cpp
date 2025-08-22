#include <iostream>
using namespace std;

class Room {
    int roomNo;
    string type;
    double price;
    bool isBooked;

public:
    // Constructor
    Room() {}
    Room(int r, string t, double p) {
        roomNo = r;
        type = t;
        price = p;
        isBooked = false;
    }

    void displayInfo() {
        cout << "Room No: " << roomNo
             << " | Type: " << type
             << " | Price: " << price
             << " | Status: " << (isBooked ? "Booked" : "Available") 
             << endl;
    }

    bool bookRoom() {
        if (!isBooked) {
            isBooked = true;
            return true;
        }
        return false;
    }

    void cancelBooking() {
        if (isBooked) {
            isBooked = false;
            cout << "Booking cancelled successfully!\n";
        } else {
            cout << "Room was not booked.\n";
        }
    }

    bool getStatus() { return isBooked; }
    int getRoomNo() { return roomNo; }
};

class Customer {
    string name;
    int id;
    int bookedRoom; // -1 means no booking

public:
    Customer(string n, int i) {
        name = n;
        id = i;
        bookedRoom = -1;
    }

    void book(Room rooms[], int n) {
        int rno;
        cout << "Enter room number to book: ";
        cin >> rno;

        for (int i = 0; i < n; i++) {
            if (rooms[i].getRoomNo() == rno) {
                if (rooms[i].bookRoom()) {
                    bookedRoom = rno;
                    cout << "Room " << rno << " booked successfully!\n";
                } else {
                    cout << "Room already booked!\n";
                }
                return;
            }
        }
        cout << "Invalid room number!\n";
    }

    void cancel(Room rooms[], int n) {
        if (bookedRoom == -1) {
            cout << "You have no booking to cancel.\n";
            return;
        }

        for (int i = 0; i < n; i++) {
            if (rooms[i].getRoomNo() == bookedRoom) {
                rooms[i].cancelBooking();
                bookedRoom = -1;
                return;
            }
        }
    }

    void displayCustomerInfo() {
        cout << "Customer Name: " << name
             << " | ID: " << id
             << " | Booked Room: ";
        if (bookedRoom == -1)
            cout << "None\n";
        else
            cout << bookedRoom << endl;
    }
};

int main() {
    // Fixed number of rooms
    const int totalRooms = 5;
    Room rooms[totalRooms] = {
        Room(101, "Single", 1000),
        Room(102, "Double", 1500),
        Room(103, "Suite", 2500),
        Room(104, "Single", 1200),
        Room(105, "Double", 1600)
    };

    // One customer for now
    string cname;
    int cid;
    cout << "Enter your name: ";
    cin >> cname;
    cout << "Enter your ID: ";
    cin >> cid;
    Customer c(cname, cid);

    int choice;
    while (true) {
        cout << "\n===== Hotel Booking Menu =====\n";
        cout << "1. View all rooms\n";
        cout << "2. Book a room\n";
        cout << "3. Cancel booking\n";
        cout << "4. View customer info\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (int i = 0; i < totalRooms; i++) {
                rooms[i].displayInfo();
            }
            break;

        case 2:
            c.book(rooms, totalRooms);
            break;

        case 3:
            c.cancel(rooms, totalRooms);
            break;

        case 4:
            c.displayCustomerInfo();
            break;

        case 5:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
