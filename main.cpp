#include "Woodland_Cavalry.h"
#include "Woodland_Artillery.h"
#include "Riverbank_Infantry.h"
#include "Riverbank_Artillery.h"
#include "Openfield_Infantry.h"
#include "Openfield_Cavalry.h"

int main() {
    // Testing Woodland Cavalry
    std::cout << "\n--- Testing Woodland Cavalry ---\n";
    WoodlandCavalry woodlandCavalry;
    woodlandCavalry.move();
    woodlandCavalry.attack();
    woodlandCavalry.defend();
    woodlandCavalry.retreat();
    woodlandCavalry.move();
    woodlandCavalry.attack();

    // Testing Woodland Artillery
    std::cout << "\n--- Testing Woodland Artillery ---\n";
    WoodlandArtillery woodlandArtillery;
    woodlandArtillery.move();
    woodlandArtillery.loadAmmunition("explosive");
    woodlandArtillery.attack();
    woodlandArtillery.defend();
    woodlandArtillery.retreat();
    woodlandArtillery.move();
    woodlandArtillery.attack();

    // Testing Riverbank Infantry
    std::cout << "\n--- Testing Riverbank Infantry ---\n";
    RiverbankInfantry riverbankInfantry;
    riverbankInfantry.move();
    riverbankInfantry.changeFormation("phalanx");
    riverbankInfantry.attack();
    riverbankInfantry.defend();
    riverbankInfantry.retreat();
    riverbankInfantry.move();
    riverbankInfantry.attack();

    // Testing Riverbank Artillery
    std::cout << "\n--- Testing Riverbank Artillery ---\n";
    RiverbankArtillery riverbankArtillery;
    riverbankArtillery.move();
    riverbankArtillery.loadAmmunition("incendiary");
    riverbankArtillery.attack();
    riverbankArtillery.defend();
    riverbankArtillery.retreat();
    riverbankArtillery.move();
    riverbankArtillery.attack();

    // Testing OpenField Infantry
    std::cout << "\n--- Testing OpenField Infantry ---\n";
    OpenFieldInfantry openFieldInfantry;
    openFieldInfantry.move();
    openFieldInfantry.changeFormation("shield wall");
    openFieldInfantry.attack();
    openFieldInfantry.defend();
    openFieldInfantry.retreat();
    openFieldInfantry.move();
    openFieldInfantry.attack();

    // Testing OpenField Cavalry
    std::cout << "\n--- Testing OpenField Cavalry ---\n";
    OpenFieldCavalry openFieldCavalry;
    openFieldCavalry.move();
    openFieldCavalry.attack();
    openFieldCavalry.defend();
    openFieldCavalry.retreat();
    openFieldCavalry.move();
    openFieldCavalry.attack();

    return 0;
}
