#ifndef B1SENSITIVEDETECTOR_H
#define B1SENSITIVEDETECTOR_H

#include<G4VSensitiveDetector.hh>

#include<G4Step.hh>
#include<G4TouchableHistory.hh>

class B1SensitiveDetector : public G4VSensitiveDetector
{
public:
    B1SensitiveDetector(G4String);
    virtual ~B1SensitiveDetector();

    virtual void Initialize (G4HCofThisEvent *);

protected:
    virtual G4bool 	ProcessHits (G4Step*, G4TouchableHistory*);
};

#endif // B1SENSITIVEDETECTOR_H
