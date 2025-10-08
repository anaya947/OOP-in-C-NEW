#include <iostream>
using namespace std;
class TaxCalculator
{

private:
    double given_tax;

public:

    double calculateTax(double in)
    {
        
        return given_tax = in * 0.15;
    }
    double calculateTax(double i, double t)
    {
        return given_tax = i * (t / 100);
    }
};
int main()
{
    TaxCalculator obb;
    cout<<"Given Tax when tax rate is 15% : "<<obb.calculateTax(500)<<endl;
    cout<<"Given Tax when tax rate is dynamic :"<<obb.calculateTax(5000,20)<<endl;
}