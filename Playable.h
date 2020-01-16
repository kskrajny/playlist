#ifndef PLAYABLE_H
#define PLAYABLE_H
using namespace std;
//Strategy
class Playable {
public:
    int nr;//dla testow
    virtual void play() const = 0;
};

#endif /* PLAYABLE_H */
