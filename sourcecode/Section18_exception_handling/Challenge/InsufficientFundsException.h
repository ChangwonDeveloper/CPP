#ifndef _INFUSFFICIENTFUNDSEXCEPTION_H_
#define _INFUSFFICIENTFUNDSEXCEPTION_H_

class InsufficientFundsException: public std::exception
{
public:
    InsufficientFundsException() = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept {
    return "Illegal balance exception";
}

};

#endif // _INFUSFFICIENTFUNDSEXCEPTION_H_
