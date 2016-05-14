#ifndef MOORE_H
#define MOORE_H

class MooreTransition;
class MooreState;

class MooreTransition {
public:
	char input;
	MooreState *destination;
};
class MooreState {
public:
	char output;
	int num_transitions;
	MooreTransition *transitions;
};


#endif // MOORE_H
