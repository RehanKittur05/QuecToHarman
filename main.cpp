#include<iostream>
#include<optional>
#include<quectel_xyz_mapper.h>

int main() {
    int userChoice;
    std::cout << "Enter a choice (0: SUCCEED, 1: UPDATE, 2: WRITEDONE, 3: SYNC_PENDING, 4: BACKUP, 5: CANCEL): ";
    std::cin >> userChoice;

    std::optional<std::string> result = MapQuectelStateToHarmanState(userChoice);
    if (result.has_value()) {
        std::cout << "XYZ Company State: " << result.value() << std::endl;
    } else {
        std::cout << "Invalid choice. Please enter a number between 0 and 5.\n";
    }

    return 0;

}