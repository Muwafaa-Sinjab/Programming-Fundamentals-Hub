#include <iostream>
using namespace std;

class clsAddress
{
private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

public:

    // 1. Default Constructor: Sets safe starting values if no data is given
    clsAddress()
    {
        _AddressLine1 = "Empty Address 1";
        _AddressLine2 = "Empty Address 2";
        _POBox = "00000";
        _ZipCode = "00000";
    }

    // 2. Parameterized Constructor: Sets real data immediately when making the object
    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
    {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }

    // 3. Copy Constructor: Copies all data from an existing object into a new object
    clsAddress(const clsAddress &OtherAddress)
    {
        _AddressLine1 = OtherAddress._AddressLine1;
        _AddressLine2 = OtherAddress._AddressLine2;
        _POBox = OtherAddress._POBox;
        _ZipCode = OtherAddress._ZipCode;
    }

    // Setters and Getters
    void SetAddressLine1(string AddressLine1) { _AddressLine1 = AddressLine1; }
    void SetAddressLine2(string AddressLine2) { _AddressLine2 = AddressLine2; }
    void SetPOBox(string POBox) { _POBox = POBox; }
    void SetZipCode(string ZipCode) { _ZipCode = ZipCode; }

    string GetAddressLine1() { return _AddressLine1; }
    string GetAddressLine2() { return _AddressLine2; }
    string GetPOBox() { return _POBox; }
    string GetZipCode() { return _ZipCode; }

    // Print function to display the address data
    void Print()
    {
        cout << "AddressLine 1 : " << _AddressLine1 << endl;
        cout << "AddressLine 2 : " << _AddressLine2 << endl;
        cout << "POBox         : " << _POBox        << endl;
        cout << "ZipCode       : " << _ZipCode      << endl;
        cout << "---------------------------------------" << endl;
    }
};

int main()
{

    // Testing Type 1: Default Constructor
    cout << "--- Testing Default Constructor ---\n";
    clsAddress Address1; 
    Address1.Print();

    // Testing Type 2: Parameterized Constructor
    cout << "--- Testing Parameterized Constructor ---\n";
    clsAddress Address2("Clock Tower", "King Abdulaziz Road", "POBox 12345", "Zip 21955");
    Address2.Print();

    // Testing Type 3: Copy Constructor
    cout << "--- Testing Copy Constructor (Copying Address 2) ---\n";
    clsAddress Address3 = Address2; 
    Address3.Print();
    return 0;
}