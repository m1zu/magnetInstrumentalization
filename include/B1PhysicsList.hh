#ifndef B1PHYSICSLIST_H
#define B1PHYSICSLIST_H

#include <G4VModularPhysicsList.hh>

class B1PhysicsList
        : public G4VModularPhysicsList
{
public:
    B1PhysicsList();
    ~B1PhysicsList();
};

#endif // B1PHYSICSLIST_H
