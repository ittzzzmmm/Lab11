;
	
	
	//The following lines of code for Yugi's turn are not completed. Please correct it.
	
	cout << "---------YUGI'S TURN, DRAW!!!------------\n";
	cout << "Yugi's cards: " << cardNames[yugiCards[0]] << " " << cardNames[yugiCards[1]] <<"\n";
	yugiScore = calScore() ;
	cout << "Yugi's score: " << yugiScore << "\n";
	yugiAction = findYugiAction(yugiScore);