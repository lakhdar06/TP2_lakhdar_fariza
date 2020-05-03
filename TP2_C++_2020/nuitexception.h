#ifndef __NUITEXCEPTION_H__
#define __NUITEXCEPTION_H__

#include <string>
#include <stdexcept>
class NuitException : public std::exception {
public:
    const char* what() const noexcept {
        return "--Nuitee deja saisi !!!!";
    }
};

#endif


