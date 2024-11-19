#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Class to represent a quiz question
class Question {
private:
    string questionText;
    string options[4];
    char correctAnswer;
    string hint;

public:
    // Constructor to initialize a question
    Question(string q, string opt[], char ans, string h) {
        questionText = q;
        for (int i = 0; i < 4; i++) {
            options[i] = opt[i];
        }
        correctAnswer = ans;
        hint = h;
    }

    // Function to display the question
    void displayQuestion() {
        cout << questionText << endl;
        for (int i = 0; i < 4; i++) {
            cout << char('A' + i) << ") " << options[i] << endl;
        }
    }

    // Function to check if the answer is correct
    bool checkAnswer(char answer) {
        return toupper(answer) == correctAnswer;
    }

    // Function to show a hint
    void showHint() {
        cout << "Hint: " << hint << endl;
    }
};

// Function to load quiz questions
void loadQuestions(vector<Question> &questions) {
    string options1[] = {"Artificial Intelligence", "Machine Learning", "Data Science", "Networking"};
    questions.push_back(Question("What does AI stand for?", options1, 'A', "It's related to simulating human intelligence."));

    string options2[] = {"Supervised Learning", "Reinforcement Learning", "Deep Learning", "Unsupervised Learning"};
    questions.push_back(Question("Which type of learning uses rewards?", options2, 'B', "Think about training through actions."));

    string options3[] = {"Intelligence", "Algorithms", "Automation", "Computers"};
    questions.push_back(Question("AI primarily involves?", options3, 'B', "Think of step-by-step instructions."));
}

// Function to play the quiz game
void playGame(vector<Question> &questions) {
    int score = 0;
    char answer;

    cout << "\n--- Welcome to SmartQuiz Challenger! ---\n" << endl;
    for (size_t i = 0; i < questions.size(); i++) {
        cout << "Question " << i + 1 << ":\n";
        questions[i].displayQuestion();

        cout << "Enter your answer (A/B/C/D) or 'H' for a hint: ";
        cin >> answer;

        if (toupper(answer) == 'H') {
            questions[i].showHint();
            cout << "Now, enter your answer (A/B/C/D): ";
            cin >> answer;
        }

        if (questions[i].checkAnswer(answer)) {
            cout << "Correct! 🎉\n";
            score += 10; // Add points for correct answers
        } else {
            cout << "Wrong! The correct answer was " << questions[i].checkAnswer(answer) << ".\n";
        }
        cout << endl;
    }

    cout << "Your final score: " << score << " points!" << endl;
    cout << "Thank you for playing!\n";
}

// Main function
int main() {
    vector<Question> questions;

    // Load questions into the quiz
    loadQuestions(questions);

    // Play the game
    playGame(questions);

    return 0;
}
