#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Node structure for linked list
struct Player {
    string name;
    int wins;
    Player* next;
};

// Function to create a new player node
Player* createPlayer(string playerName) {
    Player* newPlayer = new Player;
    newPlayer->name = playerName;
    newPlayer->wins = 0;
    newPlayer->next = NULL;
    return newPlayer;
}

// Function to add player to the end of linked list
void addPlayer(Player*& head, string playerName) {
    Player* newPlayer = createPlayer(playerName);
    if (head == NULL) {
        head = newPlayer;
        return;
    }
    Player* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newPlayer;
}

// Function to roll a dice (1 to 6)
int rollDice() {
    return rand() % 6 + 1;
}

// Function to play one round
void playRound(Player* head, int numPlayers) {
    int rolls[100];  // assuming max 100 players
    Player* temp = head;
    int highest = 0, i = 0;

    cout << "\nRolling dice for all players...\n";
    while (temp != NULL) {
        rolls[i] = rollDice();
        cout << temp->name << " rolled: " << rolls[i] << endl;

        if (rolls[i] > highest)
            highest = rolls[i];

        temp = temp->next;
        i++;
    }

    // Find winners
    temp = head;
    i = 0;
    cout << "Winner(s) of this round: ";
    while (temp != NULL) {
        if (rolls[i] == highest) {
            cout << temp->name << " ";
            temp->wins++;
        }
        temp = temp->next;
        i++;
    }
    cout << endl;
}

// Function to show final results
void showResults(Player* head) {
    cout << "\n=== Final Results ===\n";
    Player* temp = head;
    while (temp != NULL) {
        cout << temp->name << " - Wins: " << temp->wins << endl;
        temp = temp->next;
    }
}

int main() {
    srand(time(0));

    Player* head = NULL;
    int numPlayers, numRounds;

    cout << "Enter number of players: ";
    cin >> numPlayers;

    for (int i = 0; i < numPlayers; i++) {
        string name;
        cout << "Enter player " << i + 1 << " name: ";
        cin >> name;
        addPlayer(head, name);
    }

    cout << "Enter number of rounds: ";
    cin >> numRounds;

    for (int i = 0; i < numRounds; i++) {
        cout << "\n--- Round " << i + 1 << " ---\n";
        playRound(head, numPlayers);
    }

    showResults(head);

    return 0;
}
