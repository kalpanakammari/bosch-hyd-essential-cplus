#include <iostream>
#include <string>
using namespace std;

class BankCustomer {
private:
    string name;
    string adharNumber;
    string panNumber;
    string emailId;
    string phoneNumber;

public:
    // Default constructor
    BankCustomer() 
        : name(""), adharNumber(""), panNumber(""), emailId(""), phoneNumber("") {}

    // Constructor with name, adharNumber, and panNumber
    BankCustomer(string nameArg, string adharNumberArg, string panNumberArg)
        : name(nameArg), adharNumber(adharNumberArg), panNumber(panNumberArg), emailId(""), phoneNumber("") {}

    // Constructor with all parameters
    BankCustomer(string nameArg, string adharNumberArg, string panNumberArg, string phoneArg, string emailArg)
        : name(nameArg), adharNumber(adharNumberArg), panNumber(panNumberArg), phoneNumber(phoneArg), emailId(emailArg) {}

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const BankCustomer& customer) {
        os << "Name: " << customer.name << endl;
        os << "Aadhar Number: " << customer.adharNumber << endl;
        os << "PAN Number: " << customer.panNumber << endl;
        os << "Email: " << (customer.emailId.empty() ? "Not provided" : customer.emailId) << endl;
        os << "Phone: " << (customer.phoneNumber.empty() ? "Not provided" : customer.phoneNumber);
        return os;
    }
};

int main() {
    cout << "------Customer One-----------" << endl;
    BankCustomer customerOne("Sony", "999988887777", "SON987654");
    cout << customerOne << endl; // Using overloaded << operator

    cout << "------Customer Two-----------" << endl;
    BankCustomer customerTwo("Sony", "999988887777", "SON987654", "9876543210", "sony@28gmail.com");
    cout << customerTwo << endl; // Using overloaded << operator

    return 0;
}
