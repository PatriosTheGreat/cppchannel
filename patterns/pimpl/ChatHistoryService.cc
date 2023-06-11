#include "ChatHistoryService.h"
#include "MessagesRepository.h"

struct ChatHistoryService::Pimpl {
    std::string loopup_messages(const std::vector<long> messages) {
        std::string result = "";
        for (const auto& id : messages) {
            result += repository.getMessage(id) + "\n";
        }

        return result;
    }

private:
    MessagesRepository repository;
};

ChatHistoryService::ChatHistoryService() : pimpl(std::make_unique<ChatHistoryService::Pimpl>()) {
}

ChatHistoryService::~ChatHistoryService() = default;

ChatHistoryService::ChatHistoryService(ChatHistoryService&& service) = default;
ChatHistoryService& ChatHistoryService::operator=(ChatHistoryService&&) = default;

std::string ChatHistoryService::loopup_messages(const std::vector<long> messages) {
    return pimpl->loopup_messages(messages);
}