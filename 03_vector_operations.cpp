#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Initialize a vector with 3 integers
    vector<int> numbers(3, 0); // Initializes with 3 elements, each set to 0

    // Display the initial elements of the vector
    cout << "Initial vector elements: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << "numbers[" << i << "] = " << numbers[i] << " ";
    }
    cout << endl;

    // Modify elements of the vector
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    // Display the first element using the at() function
    cout << "First element using at(): " << numbers.at(0) << endl;

    // Display modified vector elements
    cout << "Modified vector elements: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << "numbers[" << i << "] = " << numbers[i] << " ";
    }
    cout << endl;

    // Insert an element at the second position
    numbers.insert(numbers.begin() + 1, 50);

    // Display vector elements after insertion
    cout << "After insertion: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove the last element
    numbers.pop_back();

    // Display vector elements after removal
    cout << "After removing the last element: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Erase the first element
    numbers.erase(numbers.begin());

    // Display vector elements after erasing the first element
    cout << "After erasing the first element: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Example of another vector with strings
    vector<string> contact{"First name", "Last name", "Phone number"};
    cout << "Contact details: ";
    for (const string& field : contact) {
        cout << field << " ";
    }
    cout << endl;

    return 0;
}

