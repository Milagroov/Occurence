#include <iostream>
#include <fstream>
#include <map>

int main()
{
    std::ifstream ifs("wildwest.txt");
    std::string s;
    std::map<std::string, int> map;

    while (ifs >> s)
        ++map[s];

    typedef std::map<std::string, int>::const_iterator iter;
    for (iter it = map.begin(); it != map.end(); ++it)
        std::cout << "Occurence du mot " << it->first << " -> " << it->second << std::endl;

    return 0;
}