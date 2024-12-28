#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

// Helper function to convert a string to lowercase
string toLower(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

// Function to generate a response based on predefined rules
string generateResponse(const string& input) {
    map<string, string> responses = {
        {"hello", "Hi there! How can I assist you?"},
        {"how are you", "I'm just a program, but I'm doing great! How about you?"},
        {"tell me a joke", "Why don't scientists trust atoms? Because they make up everything!"},
         {"help", "Sure, I am here to help. Tell me what you need assistance with."},
        {"what is vyorious", "Vyorius is an AI pilot for mobile unmanned robots, offering plug-and-play, communication-independent solutions for fleet management."},
        {"what does vyorious do", "Vyorious specializes in automation, robotics, and AI to solve complex industry challenges."},
        {"who founded vyorious", "The founders of Vyorius are Nishant Singh Rana, Amit Kumar Singh and Pankaj Kumar."},
        {"vyorious mission", "Vyorious's mission is to bridge the gap between technology and industries, making processes more efficient and scalable."},
        {"vyorious services", "Vyorious offers services in automation, robotics integration, AI development, and tech consulting."},
        {"how can vyorious help me", "Vyorious can help you automate processes, improve efficiency, and leverage AI to achieve your business goals."},
        {"what is your purpose", "I am here to assist you with your queries and make your day better!"},
        {"who created you", "I was created by a brilliant mind to assist and chat with you."},
        
        {"what is love", "Love is a beautiful feeling that connects souls."},
        {"help", "Sure, I am here to help. Tell me what you need assistance with."}
    };

    string lowerInput = toLower(input);

    // Check for exact matches in the map
    for (const auto& pair : responses) {
        if (lowerInput == pair.first) {
            return pair.second;
        }
    }

    return "Sorry, I don't understand that. Could you rephrase?";
}

int main() {
    cout << "Simple AI Chat Application (type 'exit' to quit):\n";

    string userInput;
    while (true) {
        cout << "> ";
        getline(cin, userInput);

        if (toLower(userInput) == "exit") {
            cout << "Goodbye!" << endl;
            break;
        }

        string response = generateResponse(userInput);
        cout << "AI: " << response << endl;
    }

    return 0;
}
