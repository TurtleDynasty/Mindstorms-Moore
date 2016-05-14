#include <stdio.h>
#include "moore.h"

int main(){
	struct MooreState q0;
	struct MooreState q1;
	struct MooreState q2;
	struct MooreState q3;
	
	struct MooreTransition q0_a;
	struct MooreTransition q0_b;
	struct MooreTransition q1_a;
	struct MooreTransition q1_b;
	struct MooreTransition q2_a;
	struct MooreTransition q2_b;
	struct MooreTransition q3_a;
	struct MooreTransition q3_b;

	q0_a.input = 'a';
	q0_a.destination = &q1;
	q0_b.input = 'b';
	q0_b.destination = &q0;
	q0.output = '0';
	q0.transition = {q0_a, q0_b}; //This isn't allowed???? I should have done this in C++
}