#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    
    std::vector <std::pair<std::string, float> > data;

    if(ac != 2) {
        std::cout << "Usage : ./btc input.txt " << std::endl;
        return (1);
    }
    try {
        saveData(data);
        if(checkInput(av[1], data) == 1)
            return (1);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    return (0);
}