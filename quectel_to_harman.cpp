#include "quectel_xyz_mapper.h"
#include <iostream>
#include<optional>
#include <unordered_map>

std::optional<std::string> MapQuectelStateToHarmanState(int userChoice) {
    // same implementation
    if (userChoice < 0 || userChoice > 5) {
        return std::nullopt;
    }

    QuectelState selectedState = static_cast<QuectelState>(userChoice);

    std::unordered_map<QuectelState, HarmanState> stateMapping = {
        {SUCCEED, Success_Done},
        {UPDATE, Inactive_Update},
        {WRITEDONE, Improper_Write},
        {SYNC_PENDING, Sync_In_Progress},
        {BACKUP, Performing_Backup},
        {CANCEL, CancelXYZ}
    };

    std::unordered_map<HarmanState, std::string> harmanStateStrings = {
        {Success_Done, "Success_Done"},
        {Inactive_Update, "Inactive_Update"},
        {Improper_Write, "Improper_Write"},
        {Sync_In_Progress, "Sync_In_Progress"},
        {Performing_Backup, "Performing_Backup"},
        {CancelXYZ, "Cancel"}
    };

    HarmanState mappedState = stateMapping[selectedState];
    return harmanStateStrings[mappedState];
}

// You can define main() here too

