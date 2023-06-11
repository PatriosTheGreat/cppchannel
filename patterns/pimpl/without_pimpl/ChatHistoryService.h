#include "MessagesRepository.h"
#include <vector>
#include <memory>

class ChatHistoryService {
public:
    std::string loopup_messages(const std::vector<long> messages);

private:
    MessagesRepository repository_;
};