#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// --- Simple tokenizer ---
vector<string> tokenize(const string &line) {
    vector<string> tokens;
    string token;
    stringstream ss(line);
    while (ss >> token) {
        // remove trailing comma/semicolon
        if (!token.empty() && (token.back() == ',' || token.back() == ';'))
            token.pop_back();
        tokens.push_back(token);
    }
    return tokens;
}

// --- Very basic command dispatcher ---
void handle_create(const vector<string>& tokens) {
    cout << "[CREATE TABLE detected]\n";
    if (tokens.size() < 3) {
        cout << "Syntax: CREATE TABLE name (...)\n";
        return;
    }
    cout << "Table name = " << tokens[2] << endl;
}

void handle_insert(const vector<string>& tokens) {
    cout << "[INSERT detected]\n";
}

void handle_select(const vector<string>& tokens) {
    cout << "[SELECT detected]\n";
}

// --- Main REPL ---
int main() {
    cout << "MiniSQL> Type commands like SELECT, INSERT, CREATE. Type EXIT to quit.\n\n";

    string line;
    while (true) {
        cout << "sql> ";
        if (!getline(cin, line)) break;

        // Trim
        if (line.empty()) continue;

        // EXIT / QUIT
        string upper = line;
        transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
        if (upper == "EXIT" || upper == "QUIT") {
            cout << "Bye.\n";
            break;
        }

        // Tokenize
        vector<string> tokens = tokenize(line);
        if (tokens.empty()) continue;

        // Dispatch by first token
        string cmd = tokens[0];
        transform(cmd.begin(), cmd.end(), cmd.begin(), ::toupper);

        if (cmd == "CREATE") {
            handle_create(tokens);
        } else if (cmd == "INSERT") {
            handle_insert(tokens);
        } else if (cmd == "SELECT") {
            handle_select(tokens);
        } else {
            cout << "Unknown command: " << tokens[0] << endl;
        }
    }

    return 0;
}
