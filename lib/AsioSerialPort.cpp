#include "asio.hpp"

void completion_handler(const asio::error_code& ec);

asio::io_context io;
asio::serial_port port(io, "COM13");
