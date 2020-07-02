#include <iostream>

int cookiesJar; // How many cookies are in the jar

bool test = false;

int main() {
    std::cin >> cookiesJar;

    std::cout << "There is " << cookiesJar << " cookies in the jar" << std::endl;

    if(cookiesJar > 10){

        std::cout << "That's a lot of cookies" << std::endl;

        // This is the reply if the user has over ten cookies

    }else{

        std::cout << "That's not a lot of cookies" << std::endl;

        test = true;

        // This is the reply if the user has less than ten cookies
    }

    if(test == true){
        std::cout << "Succesful" << std::endl;
    }

    std::cin.get();
    std::cin.get();
    return 0;
    
}