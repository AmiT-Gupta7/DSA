#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>  // JSON library

using json = nlohmann::json;
using namespace std;

bool isTasksJsonConfigured(const string& filePath) {
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "❌ tasks.json file not found at: " << filePath << endl;
        return false;
    }

    try {
        json j;
        file >> j;

        // Check for required keys
        if (j.contains("version") && j.contains("tasks")) {
            cout << "✅ tasks.json is properly configured." << endl;
            return true;
        } else {
            cerr << "⚠️  Missing 'version' or 'tasks' field in tasks.json." << endl;
            return false;
        }
    } catch (const exception& e) {
        cerr << "❌ Error reading JSON: " << e.what() << endl;
        return false;
    }
}

int main() {
    string path = ".vscode/tasks.json"; // default VS Code path
    bool configured = isTasksJsonConfigured(path);
    return configured ? 0 : 1;
}
