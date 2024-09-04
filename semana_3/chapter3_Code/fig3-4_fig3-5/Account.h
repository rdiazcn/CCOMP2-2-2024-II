// Account.h
// As per fig. 3.4

#include <string>

class Account {
public:
    explicit Account(std::string accountName)
    : name{accountName} {
    }

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
};