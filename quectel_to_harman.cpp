#include <iostream>
#include "quectel_xyz_mapper.h"


int main() {
    int userChoice;
    std::cout << "Enter a choice (0: SUCCEED, 1: UPDATE, 2: WRITEDONE, 3: SYNC_PENDING, 4: BACKUP, 5: CANCEL): ";
    std::cin >> userChoice;

    if (userChoice < 0 || userChoice > 5) {
        std::cout << "Invalid choice. Please enter a number between 0 and 5.\n";
        return 1;
    }

    QuectelToXYZMapper mapper;
    QuectelState state = static_cast<QuectelState>(userChoice);

    std::string xyzState = mapper.getXYZState(state);
    std::cout << "Mapped XYZ State: " << xyzState << std::endl;

    return 0;
}
