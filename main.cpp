#include "base/file_check.h"
#include <iostream>
#include <sys/stat.h>
#include <dirent.h>

using namespace std;
using namespace base;



int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "No argument!!" << endl;
        return 1;
    }
    return 0;
}