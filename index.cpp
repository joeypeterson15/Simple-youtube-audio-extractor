#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {
    if (argc < 3) {
        std::cerr << "Enter a url as the first argument. Enter the filename as the second argument" << std::endl;
    }
    std::string url = argv[1];
    std::string filename = argv[2];
    std::string path = "/Users/joeypeterson/Desktop/youtube_tracks/";

    std::string command = "yt-dlp " + url + " -x --audio-format wav -o " + path + filename;
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
        std::cout << "file saved to /Desktop/youtube_tracks/" << std::endl;
    } catch (...) {
        // Handle exception
    }

    return 0;
}