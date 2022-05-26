#include "Includes/FileSystem.h"
#include "Includes/StringAlgorithms.h"
#include "Includes/Types.h"
#include <iostream>

int main() {
    using namespace std;
    cout << sizeof(u64) << endl;
    cout << sizeof(usize) << endl;
    string url = "::root:::::home::user_name::config::i3_config::config.yaml::";
    string delim = "::";
//    for(isize i = 0; i < 20; ++i) {
//        cout << StringAlgorithms::Rotate("12345", -i) << endl;
//    }
}