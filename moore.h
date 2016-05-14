#ifndef MOORE_H
#define MOORE_H

#include <vector>

using namespace std; // using std:string and std:iostream

class MooreMachine;
class MooreState;
class MooreTransition; // forward declarations

class MooreState{
	friend class MooreTransition;
	friend class MooreMachine;

	private:
		string name;
		char output;
		vector<MooreTransition> transitions;
	
		void printMooreState(){
			cout << name << " has " << transitions.size() << " transitions." <<endl;
		}

	public:
		MooreState(string n, char o){
			name = n;
			output = o;
		}
		/*~MoreState(){
			for (int i=0; i<num_transitions; i++){
				transitions[i]
			}
		} // Need to delete all pointers and stuff to transistions*/
		
		void setName(string n){
			this->name = n;
		}
		
		void setOutput(char o){
			this->output = o;
		}

		/*void addTransition(char i, MooreState d){
			// I wonder if Trasistion shouldn't even be a class, but a data structure. :0
		}*/
};

class MooreTransition{
	friend class MooreState;
	friend class MooreMachine;

	private:
		char input;
		MooreState *destination;

	
		void printMooreTransition(){
			cout << "  " << input << " -> " << destination->name << endl;
		}
};

class MooreMachine{
	friend class MooreState;

	private:
		string name;				// name of the machine, used when printing. Does not need to match runtime name.
		vector<MooreState> states;	// list of states in the machine
		bool valid;					// tells you if your machine is a valid Moore Machine

	public:
		MooreMachine(){
			valid = false;
		}

		MooreMachine(string n){
			name = n;
			valid = false;
		}

		/* Although this behavior seems like belongs with MooreState class, 
		// it actually accesses members of both MooreState and MooreTransition
		// and cannot be added to MooreState without causing an incomplete type error.
		// I tried on 13 May 2016 to use forward declarations to fix this but it was a mess. This is easier.
		*/
		void printState(MooreState q){
			q.printMooreState();
			for (int i=0; i<q.transitions.size(); i++) {
				q.transitions[i].printMooreTransition();
			}
		}

		void printMachine(){
			cout << "Machine " << name << " has " << states.size() << " states." <<endl;
			for (int i=0; i< states.size(); i++){
				cout << "  ";
				printState(states[i]);
			}
		}

		void setName(string n){
			name = n;
		}

		void addState(MooreState s){
			states.push_back(s);
		}

		bool validate(){			// this would be a really cool feature, but not gonna implement now.
			cout << "Member function validate() in class MooreMachine has not been implemented yet." << endl << "Contact the programmer of this class to complain about it." <<endl;
			this->valid = false;
			return false;
		}
};



#endif // MOORE_H
