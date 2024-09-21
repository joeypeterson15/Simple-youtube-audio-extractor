#include <iostream>
#include <cstdlib>

int main() {
    std::string url = "https://www.youtube.com/watch?v=ZhHKyfZX7Gk";
    std::string command = "yt-dlp " + url + " -x --audio-format wav --paths wav:/Users/joeypeterson/Desktop/youtube_tracks";
    // try {
    //     FILE *fp = popen(command.c_str(), "r");
    //     if (fp == NULL) {
    //         // Handle error
    //         std::cout << "there was an error" << std::endl;
    //     }
    //     pclose(fp);
    // } catch (...) {
    //     // Handle exception
    //     std::cout << "there was an exception" << std::endl;
    // }

    try {
        int result = system(command.c_str());
        if (result != 0) {
            // Handle error
        }
    } catch (...) {
        // Handle exception
    }

    return 0;
}