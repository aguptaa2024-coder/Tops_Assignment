#include <iostream>
using namespace std;

class PaymentProcessor
{
public:
    void processPayment(float amount)
    {
        cout << "Payment without coupon" << endl;
        cout << "Final Amount: " << amount << endl;
    }

    void processPayment(float amount, string coupon)
    {
        cout << "Payment with coupon: " << coupon << endl;

        float finalAmount = amount - 100;

        cout << "Final Amount: " << finalAmount << endl;
    }
};

int main()
{
    PaymentProcessor p;

    p.processPayment(1000);
    cout << endl;

    p.processPayment(1000, "SAVE100");

    return 0;
}
