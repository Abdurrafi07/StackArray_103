#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	//constructor
	StackArray() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) { //step 1
			cout << "Number of data exceeds the limit." << endl;
			return"";
		}

		top++;  //step 2
		stack_array[top] = element;  //step 3
		cout << endl;
		cout << element << " Ditambahkan(pushed)" << endl;

		return element;
	}
	void pop() {
		if (empty()) {  //step 1
			cout << "\nStack is empty. Cannot pop." << endl;  //1.a
			return;  //1.b
		}

		cout << "\nThe popped element is: " << stack_array[top] << endl;  //step2
		top--;  //step 3 decremenet
	}
	//Method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	};
};

int main() {
	StackArray s;
	while (true) {
		cout << endl;
		cout << "\n****Stack Menu***\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "\nEnter your choice: ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
	}
}




