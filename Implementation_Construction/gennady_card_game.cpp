#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string table_card;
    cin >> table_card;
    char table_rank = table_card[0];
    char table_suit = table_card[1];
    
    bool can_play = false;
    for (int i = 0; i < 5; ++i) {
        string hand_card;
        cin >> hand_card;
        char hand_rank = hand_card[0];
        char hand_suit = hand_card[1];
        
        if (hand_rank == table_rank || hand_suit == table_suit) {
            can_play = true;
            break;
        }
        else{
            continue;
        }
    }

    if (can_play) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}