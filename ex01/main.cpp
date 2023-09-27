#include "RPN.hpp"

int main(int ac, char **av) {

    if(ac != 2) {
        std::cout << "Usage : ./RPN \"Reverse Polish Expression\"" << std::endl;
        return (1);
    }
    else {
        if(checkData(av[1]) == 1)
            return (1);
    }
    return (0);
}