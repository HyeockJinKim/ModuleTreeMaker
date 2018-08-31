#include <vector>
#include <sys/stat.h>
#include <dirent.h>
#include <string>

using namespace std;
//
// Created by khz on 18. 8. 31.
//

namespace {
    bool file_exists(const string &name) {
        struct stat buffer{};
        return stat(name.c_str(), &buffer) == 0;
    }

    bool is_dir(const string &dir) {
        DIR *dp;
        return (dp = opendir(dir.c_str())) != nullptr;
    }
}