class Foo
{
public:
    Foo(int i):m_i(i) {}
    Foo() = default;

    Foo(const Foo& x):m_i(x.m_i) {}
    /** copy ctor can not be overloading! **/
    //! Foo(const Foo&) = default; //error: 'Foo::Foo(const Foo&)' cannot be overloaded with 'Foo::Foo(const Foo&)'
    //! Foo(const Foo&) = delete; //error: 'Foo::Foo(const Foo&)' cannot be overloaded with 'Foo::Foo(const Foo&)'

    Foo& operator=(const Foo& x) {m_i = x.m_i; return *this;}
    //! Foo& operator=(const Foo& x) = default;
    //error: 'Foo& Foo::operator=(const Foo&)' cannot be overloaded with 'Foo& Foo::operator=(const Foo&)
    //! Foo& operator=(const Foo& x) = delete;
    //error: 'Foo& Foo::operator=(const Foo&)' cannot be overloaded with 'Foo& Foo::operator=(const Foo&)'

    //! void func1() = default;
    void func2() = delete;

    ~Foo() = default;
    //! ~Foo() = delete; //error: use of deleted function 'Foo::~Foo()'

private:
    int m_i;
};

int main () {
    Foo f1(5);
    Foo f2;
    Foo f3(f1);
    f3 = f2;
    //f1.func2(); // func2() can not be used.

    return 0;
}
