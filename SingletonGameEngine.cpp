#include <iostream>
#include <string>

using namespace std;

//Singleton Starter

class GameEngine {
private:
    static GameEngine * instance;   // Static pointer holds single instance

    // Private constructor prevents direct instantiation
    GameEngine() {
        cout << "GameEngine created" << endl;
    }

public:
    // Provides access to the single instance
    static GameEngine* getInstance() {
        return instance;
    }

    // This triggers game events
    void triggerEvent(const string& event){
        cout << "[GameEngine] Event Triggered: " << event << endl;
    }

    // This simulates the player's actions
    void playerAction(const string& player, const string& action){
        cout << "[GameEngine] " << player << " " << action << endl;
    }
};

// Initializes the static instance variable to nullptr
GameEngine* GameEngine::instance = nullptr;

int main() {
    GameEngine* engine = GameEngine::getInstance();

    // Trigger game events
    engine->triggerEvent("Enemy appeared!");
    engine->triggerEvent("Treasure found!");

    // Simulate player actions
    engine->playerAction("Player1", "attacks the enemy.");
    engine->playerAction("Player2", "collects the treasure.");

    // Another game event and player action
    engine->triggerEvent("Player leveled up!");
    engine->playerAction("Player1", "casts a spell.");

    return 0;
}

/**
 * Expected Output:
 *
 * [GameEngine] Event Triggered: Enemy appeared!
 * [GameEngine] Event Triggered: Treasure found!
 * [GameEngine] Player1 attacks the enemy.
 * [GameEngine] Player2 collects the treasure.
 * [GameEngine] Event Triggered: Player leveled up!
 * [GameEngine] Player1 casts a spell.
 */
