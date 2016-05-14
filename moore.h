#ifndef MOORE_H
#define MOORE_H

struct MooreTransition {
    char input;
    struct MooreState *destination;
};
struct MooreState {
    char output;
    struct MooreTransition transition[];
};

#endif // MOORE_H
