#include <iostream>
#include <string>
#include "GeoLite2PP.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    int idx = argc - 1;
    string ip = std::string(argv[idx]);
    cout << "ip:" << ip << std::endl;
    GeoLite2PP::DB db("./data.mmdb");
    auto result = db.lookup(ip.c_str());
    cout << result << std::endl;
    return 0;
}
