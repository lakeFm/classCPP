#ifndef CLASS_FUNGENERATOR_H
#define CLASS_FUNGENERATOR_H

#include "Variable.h"
#include <sstream>
#include <cctype>

class FunGenerator {
private:
    Variable var;
    string className;
public:
    explicit FunGenerator(const Variable& _v,cstr _c = "");

    string setter();
    string getter(bool isConst);
    string setterF();
    string getterF(bool isConst);

private:
    string classC();
};


#endif
