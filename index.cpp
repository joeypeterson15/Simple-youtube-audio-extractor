#include <iostream>
#include <cstdlib>

int main() {
    std::string url = "https://www.youtube.com/watch?v=ZhHKyfZX7Gk";
    std::string command = "yt-dlp " + url;
    try {
        int result = system(command.c_str());
        if (result != 0) {
            // Handle error
            std::cout << "there was an error" << std::endl;
        }
    } catch (...) {
        // Handle exception
        std::cout << "there was an exception" << std::endl;
    }
    return 0;
}