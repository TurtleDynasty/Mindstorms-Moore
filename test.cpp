#include <iostream>
#include "moore.h"

int main(){
	MooreMachine m = MooreMachine("M");
	MooreState q0 = MooreState("q0", '0');
	MooreState q1 = MooreState("q1", '0');
	MooreState q2 = MooreState("q2", '0');
	MooreState q3 = MooreState("q3", '1');
	m.addState(q0);
	m.addState(q1);
	m.addState(q2);
	m.addState(q3);

	m.printMachine();
	
	return 0;
}
