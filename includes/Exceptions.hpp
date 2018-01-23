#ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

#include <exception>

class OverflowException : public std::exception {

public:

  virtual const char * what() const throw() {
    return "Overflow on a value or operation";
  }

};

class InvalidIOperandException : public std::exception {

public:

  virtual const char * what() const throw() {
    return "IOperand is invalid";
  }
  
};

class DivideByZeroException : public std::exception {

public:

  virtual const char * what() const throw() {
    return "Invalid divide by zero operation";
  }
  
};

class UnknownInstructionException : public std::exception {

public:

  virtual const char * what() const throw() {
    return "Unknown Instruction";
  }
  
};

#endif