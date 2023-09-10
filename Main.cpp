#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Function to generate random video ideas
std::string generateVideoIdea() {
    std::vector<std::string> ideas = {
        "Travel vlog in your favorite city",
        "Cooking a delicious recipe",
        "Tech review of the latest gadgets",
        "Gaming walkthrough and tips",
        "Fitness and workout routine",
        "DIY home improvement project",
        "Book or movie review",
        "Interview with an interesting person",
        "Funny pet videos",
        "Educational tutorial on a topic you're passionate about"
    };

    // Generate a random index
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomIndex = std::rand() % ideas.size();

    // Return the randomly selected idea
    return ideas[randomIndex];
}

int main() {
    std::cout << "Welcome to the Video Idea Generator!" << std::endl;
    
    while (true) {
        std::cout << "Press Enter to generate a video idea or 'q' to quit: ";
        char input;
        std::cin.get(input);
        
        if (input == 'q') {
            break;
        }
        
        // Generate and display a random video idea
        std::string idea = generateVideoIdea();
        std::cout << "Your video idea: " << idea << std::endl;
        
        // Clear the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    std::cout << "Goodbye!" << std::endl;
    
    return 0;
}
