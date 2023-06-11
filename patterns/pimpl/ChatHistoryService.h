#include <vector>
#include <memory>

class ChatHistoryService {
public:
    ChatHistoryService();
    ~ChatHistoryService();

    ChatHistoryService(ChatHistoryService&& service);
    ChatHistoryService& operator=(ChatHistoryService&&);
    
    ChatHistoryService(const ChatHistoryService& sevice) = delete;
    ChatHistoryService& operator=(const ChatHistoryService&) = delete;

    std::string loopup_messages(const std::vector<long> messages);

private:
    struct Pimpl;
    std::unique_ptr<Pimpl> pimpl;
};