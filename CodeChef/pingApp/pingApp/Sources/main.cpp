#include <iostream>
#include <string>
int main() {
    system("Color 5E");
    char webAddress[101];
    std::cout<<"Enter the website address to ping\n";
    std::cin.getline(webAddress, 100);
    std::string pinger = "ping ";
    puts("Do you want to ping until this program runs?\n");
    puts("Enter Y to Yes & N to No\n");
    char ch = getchar();
    if (ch == 'Y') {
        pinger = pinger + webAddress + " -t";
        const char* command = pinger.std::string::c_str();
        puts("To stop the program press CTRL + C\n");
        system(command);
        getchar();
    }
    else {
        pinger = pinger + webAddress;
        const char* command = pinger.std::string::c_str();
        system(command);
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}