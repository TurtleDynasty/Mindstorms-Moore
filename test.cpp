#include <iostream>
#include "moore.h"

int main(){
	MooreState q0;
	MooreState q1;
	MooreState q2;
	MooreState q3;
	
	MooreTransition q0_a;
	MooreTransition q0_b;
	MooreTransition q1_a;
	MooreTransition q1_b;
	MooreTransition q2_a;
	MooreTransition q2_b;
	MooreTransition q3_a;
	MooreTransition q3_b;

	q0_a.input = 'a';
	q0_a.destination = &q1;
	q0_b.input = 'b';
	q0_b.destination = &q0;
	q0.name = "q0";
	q0.output = '0';
	q0.num_transitions = 2;
	MooreTransition temp_array[q0.num_transitions] = {q0_a, q0_b}; 
	q0.transitions = temp_array;

	printState(q0);

}
