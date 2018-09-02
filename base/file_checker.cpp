//
// Created by khz on 18. 8. 31.
//
#include <dirent.h>
#include <string>
#include <sys/stat.h>

#include "file_checker.h"

using namespace std;

namespace base{

    // Verify that the file exists.
    bool file_exists(const string &name) {
        struct stat buffer{};
        return stat(name.c_str(), &buffer) == 0;
    }

    // Verify that it is a directory.
    bool is_dir(const string &dir) {
        DIR *dp;
        return (dp = opendir(dir.c_str())) != nullptr;
    }


}