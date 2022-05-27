#include "Includes/FileSystem.h"
#include "Includes/StringAlgorithms.h"
#include "Includes/Types.h"
#include <iostream>

int main() {
    using namespace std;
//    string url = "::root:::::home::user_name::config::i3_config::config.yaml::";
    string url = ":";
    string delim = "::";
    for(const auto& i : StringAlgorithms::Split(url, delim)) {
        cout << i << endl;
    }
}