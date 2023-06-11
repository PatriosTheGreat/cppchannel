class Base
{
public:
    Base() { reallyDoIt(); }
    void reallyDoIt() { doIt(); } // Pure virtual call
    virtual void doIt() = 0;
};

class Derived : public Base
{
    void doIt() {}
};

int main(void)
{
    Derived d;  // This will cause "pure virtual function call" error
}