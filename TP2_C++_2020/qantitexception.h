
#ifndef __QUANTITEXCEPTION_H__
#define __QUANTITEXCEPTION_H__

#include <string>
#include <stdexcept>
    class QantitException : public std::exception {
    public:
        const char* what() const noexcept {
            return "--Quantite Negative !!!!";
        }
    };

#endif

