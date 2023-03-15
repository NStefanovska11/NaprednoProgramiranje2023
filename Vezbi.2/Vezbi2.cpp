#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
#include <vector>

using namespace std;

//Дефинираме класа за карта
class Card {
private:
    int rank_;
    int suit_;

public:
    Card(int rank, int suit) : rank_(rank), suit_(suit) {}

    int getRank() const {
        return rank_;
    }

    int getSuit() const {
        return suit_;
    }

    void printCard() const {
        string rankStr, suitStr;

        //Ги испишуваме какви комвинации има на знаци и броеви
        if (rank_ == 1) {
            rankStr = "A";
        } else if (rank_ == 11) {
            rankStr = "J";
        } else if (rank_ == 12) {
            rankStr = "Q";
        } else if (rank_ == 13) {
            rankStr = "K";
        } else {
            rankStr = to_string(rank_);
        }

        if (suit_ == 0) {
            suitStr = "♠";
        } else if (suit_ == 1) {
            suitStr = "♣";
        } else if (suit_ == 2) {
            suitStr = "♥";
        } else if (suit_ == 3) {
            suitStr = "♦";
        } else {
            suitStr = "Joker";
        }

        cout << rankStr << suitStr << " ";
    }
};

// Define a Deck class
class Deck {
private:
    vector<Card> cards_;

public:
    Deck() {
        //Се креира декот за пречатење
        for (int suit = 0; suit < 4; suit++) {
            for (int rank = 1; rank <= 13; rank++) {
                cards_.push_back(Card(rank, suit));
            }
        }

        //Ги додаваме двата јокери
        cards_.push_back(Card(0, 4));
        cards_.push_back(Card(0, 4));
    }

    void shuffle() {
        auto seed = chrono::system_clock::now().time_since_epoch().count();
        default_random_engine rng(seed);
        std::shuffle(cards_.begin(), cards_.end(), rng);
    }

    void printDeck() const {
        for (const auto& card : cards_) {
            card.printCard();
            if (card.getRank() == 13) {
                cout << endl;
            }
        }
    }
};

int main() {
    //Се креира шпил и се меша
    Deck deck;
    deck.shuffle();

    //Го принтаме или испишуваме шпилот
    deck.printDeck();
    cout<<"Natalija Stefanovska";
    return 0;
}
//Natalija Stefanovska
