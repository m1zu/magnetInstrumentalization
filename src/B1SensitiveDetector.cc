// -------------------------------------------- //
//
//
//
// -------------------------------------------- //

#include "B1SensitiveDetector.hh"

#include<G4ios.hh>

B1SensitiveDetector::B1SensitiveDetector(G4String name)
    : G4VSensitiveDetector(name)
{
}

B1SensitiveDetector::~B1SensitiveDetector()
{
}

void B1SensitiveDetector::Initialize (G4HCofThisEvent *)
{
}

G4bool B1SensitiveDetector::ProcessHits (G4Step *aStep, G4TouchableHistory *ROhist)
{
    return false;
}
