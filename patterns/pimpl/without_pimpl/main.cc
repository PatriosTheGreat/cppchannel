#include "ChatHistoryService.h"
#include <iostream>

int main() {
    ChatHistoryService service;
    std::cout << service.loopup_messages({1, 10, 105});
    return 0;
}