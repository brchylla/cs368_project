#include <iostream>
#include <fstream>
#include <stdio>
#inclue <map>

//fields
	int numQuestions; 							//number of questions counter
	std::vector<std::string> questions;			//a vector of questions
	std::map<double, std::string> 				//ordered map for answer ranges
	int rawScore = 0;
	std::string firstAnswer, secondAnswer;

//read in file function
	//open a file stream

	//while the line is not blank
		//read in string until delimiter '? Enter ' and store in the vector
		//after the delimiter store first answer until ' or '
		//store second answer
		//increment question counter
		//go to the next line (and repeat)
		
		//when 'Results: ' is reached, go to the next line
		//store the first number as the key to a map and the string as its value
		//
		
	//once the 2nd number on the line reads '1.0' close on next line
	
	
double calculateScore() {
	std::string userAnswer;
	for (auto i = questions.begin(); i != questions.end(); ++i) {
		std::cout << *it << endl;
		std::cin >> userAnswer;
		
		if (userAnswer.equals(firstAnswer)) {
			rawScore += 1;
		}
		else if (userAnswer.equals(secondAnswer)) {
			rawScore -= 1;
		}
		else {
			std::cout << "Sorry, " << userAnswer 
			<< " is not a recognized choice. Please try again." << endl;
	}
	
	double score = rawScore/numQuestions;
	return score;
	}
	
	
std::string getUserAnswer(double score) {	
	for (auto i = answers.begin(); i != answers.end(); ++i) {
		if (i > score) {
			i--;
			return answers[*i];
		}
}
	
void main() {
	readFile();
	double score = calculateScore();
	std::string userAnswer = getUserAnswer(score);
	std::cout << "Your answer is: " << userAnswer << std::endl;
}