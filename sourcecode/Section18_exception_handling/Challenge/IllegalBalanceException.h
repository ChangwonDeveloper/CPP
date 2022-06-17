#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__


//1. Derive IllegalBalanceException from std::exception and implement the what() method to provide an exception message.
//   This exception object should be thrown from the Account class constructor if an account object is created with a negative 
//   balance.

class IllegalBalanceException: public std::exception
{
public:
    IllegalBalanceException() = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept {
        return "Illegal balance exception";
}
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
