#include <vector>
#include "FunGenerator.h"
#include "Constructor.h"

int main(int a,char **b){
    Variable a1("int","a");
    Variable a2("float","f");
    Variable a3("rs::type","custom");
    Variable a4("vector<int>","vec_i");
    std::vector<Variable> vars = {a1,a2,a3,a4};
    string n = "CUSTOM";
    Constructor c(vars,false,n);
    for(int _a = 0;_a < 3;_a++)
        printf("%s\n",c.make(_a).c_str());
    return 0;
}
