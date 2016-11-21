#ifndef DetectorConstruction_h
#define DetectorConstruction_h 1

#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"

class G4Material;
class G4VPhysicalVolume;

class DetectorConstruction : public G4VUserDetectorConstruction {
public:
  DetectorConstruction();
  virtual ~DetectorConstruction();
  
public:
  virtual G4VPhysicalVolume* Construct();
  
private:
  void DefineMaterials();
  void SetupGeometry();
  
private:
  G4Material* fLiquidHelium;
  G4Material* fTellurium;
  G4Material* fOxygen;
  G4Material* fTeO2;
  G4Material* fAluminum;
  G4Material* fTungsten;
  G4VPhysicalVolume* fWorldPhys;
  G4bool fConstructed;
  G4bool fIfField;
  
public:
  inline void Field(G4bool bl) { fIfField = bl; }
};

#endif

