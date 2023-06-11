#include <string>

class MessagesRepository {
public:
    std::string getMessage(long id) {
        return "message #" + std::to_string(id);
    }
};