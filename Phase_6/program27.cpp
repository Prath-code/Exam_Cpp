#include <iostream>
using namespace std;

class RBI
{
public:
    virtual float getROI()
    {
        return 6.5f;
    }
    virtual ~RBI() {}
};

class SBI : public RBI
{
};

class ICICI : public RBI
{
public:
    float getROI() override
    {
        return 7.2f;
    }
};

class HDFC : public RBI
{
public:
    float getROI() override
    {
        return 7.5f;
    }
};

int main()
{
    RBI *bank;
    SBI sbi;
    ICICI icici;
    HDFC hdfc;

    bank = &sbi;
    cout << "SBI ROI: " << bank->getROI() << "%" << endl;

    bank = &icici;
    cout << "ICICI ROI: " << bank->getROI() << "%" << endl;

    bank = &hdfc;
    cout << "HDFC ROI: " << bank->getROI() << "%" << endl;

    return 0;
}