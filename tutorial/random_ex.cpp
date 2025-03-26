#include <iostream>
using namespace std;

int main(){
    double sales = 95000;
    cout << "sales: " << sales << endl;

    double stateTax = sales * 0.04;
    cout << "state tax: " << stateTax << endl;

    double countyTax = sales * 0.02;
    cout << "county tax: " << countyTax << endl;
    
    double totalTax = stateTax + countyTax;
    cout << "total tax: " << totalTax;




    return 0;
}