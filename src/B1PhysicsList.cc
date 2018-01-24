#include "B1PhysicsList.hh"
#include <G4EmStandardPhysics.hh>

B1PhysicsList::B1PhysicsList()
    : G4VModularPhysicsList()
{
    RegisterPhysics(new G4EmStandardPhysics);
    SetVerboseLevel(0);
}

B1PhysicsList::~B1PhysicsList()
{}

