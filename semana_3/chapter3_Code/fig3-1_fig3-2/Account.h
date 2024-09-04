// Account.h
// As per fig. 3.2


#include <string>

class Account {
public:
    void setName(std::string accountName){
        name = accountName;
    }

    std::string getName() const{
        return name;
    }

private:
    std::string name;

};