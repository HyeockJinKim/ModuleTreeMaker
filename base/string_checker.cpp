//
// Created by khz on 18. 9. 2.
//
#include <algorithm>
#include <iostream>
#include "string_checker.h"

namespace base {

    // Check that value exists for str.
    bool contains_value(const string str, const string value) {
        ssize_t pos = str.find(value);
        return pos != -1;
    }

    // Find the value of str input.
    string extract_string(const string str) {
        ssize_t pos = str.find('\"');
        if (pos != -1) {
            auto p1 = static_cast<unsigned long>(pos)+1;
            ssize_t pos2 = str.find('\"', p1);
            auto p2 = static_cast<unsigned long>(pos2);
            return str.substr(p1, p2-p1);
        }
        return nullptr;
    }

}