#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <ctime>
#include "asio.hpp"
#include "nlohmann/json.hpp"


void timer_expired(std::string id)
{
    auto t = std::chrono::system_clock::now().time_since_epoch().count();
    std::cout << t << id << " enter.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    t = std::chrono::system_clock::now().time_since_epoch().count();
    std::cout << t << id << " leave.\n";
}


int main()
{
    // Reading config JSON
    nlohmann::json j;
    std::ifstream i("config.json");
    i >> j;
    std::cout << "### Serial Info ###" << std::endl; 
    std::cout << "port: " << j["port"] << std::endl;
    std::cout << "baud: " << j["baud"] << std::endl;

    return 0;
}