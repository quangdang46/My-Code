#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
    private :
        std::string text;
        int order;
    public: 
        Message(const std::string &text , int order) : text(text),order(order) {}
        const string& get_text() {
            return this->text;
        }
        bool operator <(const Message &message)
        {
            return this->order<message.order;
        }
};
class MessageFactory {
    private :
        int number_of_messages=0;
    public:
        MessageFactory() {}
        Message create_message(const string& text) {
            number_of_messages++;
            return Message(text,number_of_messages);
        }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
