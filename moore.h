#ifndef MOORE_H
#define MOORE_H

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
		int num_transitions;
		MooreTransition *transitions;
	
		MoreState(){
			num_transitions = 0;
		}

		MoreState( string n, char o){
			name = n;
			output = o;
			num_transitions = 0;
		}
		/*~MoreState(){
			for (int i=0; i<num_transitions; i++){
				transitions[i]
			}
		} // Need to delete all pointers and stuff to transistions*/
	
		void printMooreState(){
			cout << name << " has " << num_transitions << " transitions: " <<endl;
		}

	public:
		void setName(string n){
			this->name = n;
		}
		void setOutput(char o){
			this->output = o;
		}
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
		string name;
		int num_states;
		MooreState *states;

	public:
		MooreMachine(){
			num_states = 0;
		}

		MooreMachine(string n){
			name = n;
			num_states = 0;
		}

		void printState(MooreState q){
			q.printMooreState();
			for (int i=0; i<q.num_transitions; i++) {
					q.transitions[i].printMooreTransition();
			}
		}

		void addState(MooreState){
			//THIS is where you left off
		}
};

#endif // MOORE_H
