#include <iostream>
#include "asio.hpp"

int main()
{
  asio::io_context io;

  asio::steady_timer timer(io, asio::chrono::seconds(5));
  timer.wait();

  std::cout << "Hello, world!" << std::endl;

  return 0;
}