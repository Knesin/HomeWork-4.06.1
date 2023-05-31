#include <iostream>
#include <string>
#include <map>

void print_sort_map(const std::map<char, int>& m, int max) {
    for (; 0 != max;) {
        for (const auto& i : m) {
            if (i.second == max) {
                std::cout << i.first << ": " << i.second << std::endl;
            }
        }
        --max;
    }
}

int main()
{
    int max = 0;
    std::map<char, int> result;
    std::string in_string =  "Hello World!!";
    for(const auto i : in_string) {
        result[i] ++;
        if (max < result[i]) {
            max = result[i];
        }
    }
    std::cout << "[IN]: " << in_string <<std::endl;
    std::cout << "[OUT]: " << std::endl;
    print_sort_map(result, max);
}
