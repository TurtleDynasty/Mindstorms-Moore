#ifndef MOORE_H
#define MOORE_H

using namespace std;

class MooreTransition;



class MooreState{
public:
	string name;
	char output;
	int num_transitions;
	MooreTransition *transitions;

	MoreState( string n, char o){
		name = n;
		output = o;
	}
	/*~MoreState(){
		for (int i=0; i<num_transitions; i++){
			transitions[i]
		}
	} //Need to delete all pointers and stuff to transistions*/

	void printMooreState(){
		cout << name << " has " << num_transitions << " transitions: " <<endl;
	}
};

class MooreTransition{
public:
	char input;
	MooreState *destination;

	void printMooreTransition(){
		cout << "  " << input << " -> " << destination->name << endl;
	}
};

void printState(MooreState q){
	q.printMooreState();
	for (int i=0; i<q.num_transitions; i++) {
			q.transitions[i].printMooreTransition();
	}
}

#endif // MOORE_H
