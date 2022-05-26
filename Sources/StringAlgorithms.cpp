#include "../Includes/Types.h"
#include "../Includes/StringAlgorithms.h"

namespace StringAlgorithms {
    using namespace std;

    string Substring(const string &str, usize begin, usize end = string::npos) {
        usize str_size = str.size();
        if (end > str_size) end = str_size;
        // TODO: Implement Substring
        return string();
    }

    vector<string> Split(const string &haystack, const string &needle) {
        vector<string> wheat;
        usize begin = 0;
        usize end = 0;
        usize haystack_size = haystack.size();
        while (end < haystack_size) {
            end = haystack.find(needle, begin);
            if (end == string::npos) {
                // end = npos
                // => npos = max(usize)
                // => substr will be the last remaining string
                wheat.push_back(haystack.substr(begin, end));
                break;
            }
            wheat.push_back(haystack.substr(begin, end - begin));
            end += needle.size();
            begin = end;
        }
        return wheat;
    }

    string Rotate(const string &str, isize rotate_num) {
        isize str_len = str.size();
        if (str_len <= 0) return "";
        isize rot_amount = rotate_num % str_len;
        if (rot_amount == 0) {
            return str;
        } else {
            if (rot_amount > 0) {
                return str.substr(str_len- rot_amount, string::npos)
                       + str.substr(0, str_len - rot_amount);
            } else {
                rot_amount *= -1;
                return str.substr(rot_amount, string::npos)
                        + str.substr(0, rot_amount);
            }
        }
    }

}