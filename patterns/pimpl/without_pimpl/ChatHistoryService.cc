#include "ChatHistoryService.h"

std::string ChatHistoryService::loopup_messages(const std::vector<long> messages) {
    std::string result = "";
    for (const auto& id : messages) {
        result += repository_.getMessage(id) + "\n";
    }

    return result;
}