#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <functional>

using namespace std;

class ScientificCalculator {
private:
    double memory;
    double lastResult;
    bool isRadians;
    map<string, double> variables;

public:
    ScientificCalculator() : memory(0), lastResult(0), isRadians(true) {
        // Initialize common variables
        variables["pi"] = M_PI;
        variables["e"] = M_E;
    }

    // Basic Arithmetic Operations
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            throw runtime_error("Math Error: Division by zero");
        }
        return a / b;
    }
    double power(double base, double exponent) { return pow(base, exponent); }
    double squareRoot(double x) {
        if (x < 0) {
            throw runtime_error("Math Error: Square root of negative number");
        }
        return sqrt(x);
    }

    // Trigonometric Functions
    double sine(double x) { 
        return sin(isRadians ? x : degreesToRadians(x)); 
    }
    double cosine(double x) { 
        return cos(isRadians ? x : degreesToRadians(x)); 
    }
    double tangent(double x) { 
        double result = tan(isRadians ? x : degreesToRadians(x));
        if (isinf(result)) {
            throw runtime_error("Math Error: Tangent undefined");
        }
        return result;
    }

    // Inverse Trigonometric Functions
    double arcSine(double x) {
        if (x < -1 || x > 1) {
            throw runtime_error("Math Error: Domain error for arcsin");
        }
        double result = asin(x);
        return isRadians ? result : radiansToDegrees(result);
    }
    double arcCosine(double x) {
        if (x < -1 || x > 1) {
            throw runtime_error("Math Error: Domain error for arccos");
        }
        double result = acos(x);
        return isRadians ? result : radiansToDegrees(result);
    }
    double arcTangent(double x) {
        double result = atan(x);
        return isRadians ? result : radiansToDegrees(result);
    }

    // Logarithmic Functions
    double naturalLog(double x) {
        if (x <= 0) {
            throw runtime_error("Math Error: Logarithm of non-positive number");
        }
        return log(x);
    }
    double logBase10(double x) {
        if (x <= 0) {
            throw runtime_error("Math Error: Logarithm of non-positive number");
        }
        return log10(x);
    }
    double exponential(double x) { return exp(x); }

    // Other Scientific Functions
    double factorial(int n) {
        if (n < 0) {
            throw runtime_error("Math Error: Factorial of negative number");
        }
        if (n > 20) { // Practical limit for double precision
            throw runtime_error("Math Error: Factorial too large");
        }
        double result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    double absolute(double x) { return fabs(x); }
    double reciprocal(double x) {
        if (x == 0) {
            throw runtime_error("Math Error: Division by zero");
        }
        return 1.0 / x;
    }

    // Conversion Functions
    double degreesToRadians(double degrees) { return degrees * M_PI / 180.0; }
    double radiansToDegrees(double radians) { return radians * 180.0 / M_PI; }

    // Memory Operations
    void memoryStore(double value) { memory = value; }
    double memoryRecall() { return memory; }
    void memoryAdd(double value) { memory += value; }
    void memorySubtract(double value) { memory -= value; }
    void memoryClear() { memory = 0; }

    // Angle Mode
    void setRadiansMode() { isRadians = true; }
    void setDegreesMode() { isRadians = false; }
    string getAngleMode() { return isRadians ? "RAD" : "DEG"; }

    // Variable Operations
    void storeVariable(const string& name, double value) {
        variables[name] = value;
    }
    
    double recallVariable(const string& name) {
        if (variables.find(name) == variables.end()) {
            throw runtime_error("Error: Variable not found");
        }
        return variables[name];
    }

    // Statistical Functions (basic)
    double mean(const vector<double>& data) {
        if (data.empty()) {
            throw runtime_error("Error: Empty dataset");
        }
        double sum = 0;
        for (double value : data) {
            sum += value;
        }
        return sum / data.size();
    }

    double standardDeviation(const vector<double>& data, bool isSample = true) {
        if (data.empty()) {
            throw runtime_error("Error: Empty dataset");
        }
        double m = mean(data);
        double sumSquared = 0;
        for (double value : data) {
            sumSquared += (value - m) * (value - m);
        }
        int divisor = isSample ? data.size() - 1 : data.size();
        return sqrt(sumSquared / divisor);
    }

    // Display last result
    double getLastResult() { return lastResult; }
    void setLastResult(double result) { lastResult = result; }

    // Evaluate simple expressions
    double evaluateExpression(const string& expression) {
        // Simple expression parser (basic implementation)
        istringstream iss(expression);
        double result = 0;
        char op = '+';
        double number;
        
        while (iss >> number) {
            switch (op) {
                case '+': result += number; break;
                case '-': result -= number; break;
                case '*': result *= number; break;
                case '/': 
                    if (number == 0) throw runtime_error("Math Error: Division by zero");
                    result /= number; 
                    break;
            }
            iss >> op;
        }
        
        lastResult = result;
        return result;
    }
};

class CalculatorUI {
private:
    ScientificCalculator calc;

    void displayMenu() {
        cout << "\n=== SCIENTIFIC CALCULATOR (fx-991 ES Plus Style) ===" << endl;
        cout << "Current Angle Mode: " << calc.getAngleMode() << endl;
        cout << "Memory: " << calc.memoryRecall() << endl;
        cout << "Last Result: " << calc.getLastResult() << endl << endl;
        
        cout << "1. Basic Arithmetic" << endl;
        cout << "2. Trigonometric Functions" << endl;
        cout << "3. Logarithmic/Exponential" << endl;
        cout << "4. Other Scientific Functions" << endl;
        cout << "5. Memory Operations" << endl;
        cout << "6. Angle Mode Settings" << endl;
        cout << "7. Variable Operations" << endl;
        cout << "8. Statistical Functions" << endl;
        cout << "9. Simple Expression" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose an option: ";
    }

    void basicArithmeticMenu() {
        cout << "\n--- Basic Arithmetic ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. Square Root" << endl;
        cout << "Choose operation: ";
        
        int choice;
        cin >> choice;
        
        double a, b, result;
        cout << "Enter first number: ";
        cin >> a;
        
        if (choice != 6) {
            cout << "Enter second number: ";
            cin >> b;
        }

        try {
            switch (choice) {
                case 1: result = calc.add(a, b); break;
                case 2: result = calc.subtract(a, b); break;
                case 3: result = calc.multiply(a, b); break;
                case 4: result = calc.divide(a, b); break;
                case 5: result = calc.power(a, b); break;
                case 6: result = calc.squareRoot(a); break;
                default: cout << "Invalid choice!" << endl; return;
            }
            calc.setLastResult(result);
            cout << "Result: " << setprecision(10) << result << endl;
        } catch (const exception& e) {
            cout << e.what() << endl;
        }
    }

    void trigonometricMenu() {
        cout << "\n--- Trigonometric Functions ---" << endl;
        cout << "1. Sine" << endl;
        cout << "2. Cosine" << endl;
        cout << "3. Tangent" << endl;
        cout << "4. Arc Sine" << endl;
        cout << "5. Arc Cosine" << endl;
        cout << "6. Arc Tangent" << endl;
        cout << "Choose operation: ";
        
        int choice;
        cin >> choice;
        
        double x, result;
        cout << "Enter value: ";
        cin >> x;

        try {
            switch (choice) {
                case 1: result = calc.sine(x); break;
                case 2: result = calc.cosine(x); break;
                case 3: result = calc.tangent(x); break;
                case 4: result = calc.arcSine(x); break;
                case 5: result = calc.arcCosine(x); break;
                case 6: result = calc.arcTangent(x); break;
                default: cout << "Invalid choice!" << endl; return;
            }
            calc.setLastResult(result);
            cout << "Result: " << setprecision(10) << result << endl;
        } catch (const exception& e) {
            cout << e.what() << endl;
        }
    }

    void logarithmicMenu() {
        cout << "\n--- Logarithmic/Exponential Functions ---" << endl;
        cout << "1. Natural Logarithm (ln)" << endl;
        cout << "2. Base-10 Logarithm (log)" << endl;
        cout << "3. Exponential (e^x)" << endl;
        cout << "Choose operation: ";
        
        int choice;
        cin >> choice;
        
        double x, result;
        cout << "Enter value: ";
        cin >> x;

        try {
            switch (choice) {
                case 1: result = calc.naturalLog(x); break;
                case 2: result = calc.logBase10(x); break;
                case 3: result = calc.exponential(x); break;
                default: cout << "Invalid choice!" << endl; return;
            }
            calc.setLastResult(result);
            cout << "Result: " << setprecision(10) << result << endl;
        } catch (const exception& e) {
            cout << e.what() << endl;
        }
    }

    void otherScientificMenu() {
        cout << "\n--- Other Scientific Functions ---" << endl;
        cout << "1. Factorial" << endl;
        cout << "2. Absolute Value" << endl;
        cout << "3. Reciprocal" << endl;
        cout << "Choose operation: ";
        
        int choice;
        cin >> choice;
        
        double x, result;
        
        try {
            switch (choice) {
                case 1: 
                    int n;
                    cout << "Enter integer: ";
                    cin >> n;
                    result = calc.factorial(n); 
                    break;
                case 2: 
                    cout << "Enter value: ";
                    cin >> x;
                    result = calc.absolute(x); 
                    break;
                case 3: 
                    cout << "Enter value: ";
                    cin >> x;
                    result = calc.reciprocal(x); 
                    break;
                default: cout << "Invalid choice!" << endl; return;
            }
            calc.setLastResult(result);
            cout << "Result: " << setprecision(10) << result << endl;
        } catch (const exception& e) {
            cout << e.what() << endl;
        }
    }

    void memoryOperationsMenu() {
        cout << "\n--- Memory Operations ---" << endl;
        cout << "1. Store to Memory" << endl;
        cout << "2. Recall Memory" << endl;
        cout << "3. Add to Memory" << endl;
        cout << "4. Subtract from Memory" << endl;
        cout << "5. Clear Memory" << endl;
        cout << "Choose operation: ";
        
        int choice;
        cin >> choice;
        
        double value;
        
        switch (choice) {
            case 1: 
                cout << "Enter value to store: ";
                cin >> value;
                calc.memoryStore(value);
                break;
            case 2: 
                cout << "Memory value: " << calc.memoryRecall() << endl;
                break;
            case 3: 
                cout << "Enter value to add: ";
                cin >> value;
                calc.memoryAdd(value);
                break;
            case 4: 
                cout << "Enter value to subtract: ";
                cin >> value;
                calc.memorySubtract(value);
                break;
            case 5: 
                calc.memoryClear();
                cout << "Memory cleared" << endl;
                break;
            default: 
                cout << "Invalid choice!" << endl; 
                return;
        }
    }

public:
    void run() {
        int choice;
        
        do {
            displayMenu();
            cin >> choice;
            
            switch (choice) {
                case 1: basicArithmeticMenu(); break;
                case 2: trigonometricMenu(); break;
                case 3: logarithmicMenu(); break;
                case 4: otherScientificMenu(); break;
                case 5: memoryOperationsMenu(); break;
                case 6: 
                    cout << "\n--- Angle Mode Settings ---" << endl;
                    cout << "1. Radians\n2. Degrees\nChoose: ";
                    int mode;
                    cin >> mode;
                    if (mode == 1) calc.setRadiansMode();
                    else if (mode == 2) calc.setDegreesMode();
                    else cout << "Invalid choice!" << endl;
                    break;
                case 7: {
                    cout << "\n--- Variable Operations ---" << endl;
                    cout << "1. Store Variable\n2. Recall Variable\nChoose: ";
                    int varChoice;
                    cin >> varChoice;
                    if (varChoice == 1) {
                        string name;
                        double value;
                        cout << "Enter variable name: ";
                        cin >> name;
                        cout << "Enter value: ";
                        cin >> value;
                        calc.storeVariable(name, value);
                    } else if (varChoice == 2) {
                        string name;
                        cout << "Enter variable name: ";
                        cin >> name;
                        try {
                            cout << name << " = " << calc.recallVariable(name) << endl;
                        } catch (const exception& e) {
                            cout << e.what() << endl;
                        }
                    }
                    break;
                }
                case 8: {
                    cout << "\n--- Statistical Functions ---" << endl;
                    cout << "Enter numbers separated by spaces (end with any non-number): ";
                    vector<double> data;
                    double num;
                    while (cin >> num) {
                        data.push_back(num);
                    }
                    cin.clear();
                    cin.ignore(10000, '\n');
                    
                    try {
                        cout << "Mean: " << calc.mean(data) << endl;
                        cout << "Sample Standard Deviation: " << calc.standardDeviation(data, true) << endl;
                        cout << "Population Standard Deviation: " << calc.standardDeviation(data, false) << endl;
                    } catch (const exception& e) {
                        cout << e.what() << endl;
                    }
                    break;
                }
                case 9: {
                    cout << "\n--- Simple Expression ---" << endl;
                    cout << "Enter simple expression (e.g., '2 + 3 * 4'): ";
                    cin.ignore();
                    string expression;
                    getline(cin, expression);
                    try {
                        double result = calc.evaluateExpression(expression);
                        cout << "Result: " << result << endl;
                    } catch (const exception& e) {
                        cout << e.what() << endl;
                    }
                    break;
                }
                case 0:
                    cout << "Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        } while (choice != 0);
    }
};

int main() {
    CalculatorUI ui;
    ui.run();
    return 0;
}