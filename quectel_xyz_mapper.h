#pragma once
#include <optional>
#include <string>

// Quectel states
enum QuectelState {
    SUCCEED,
    UPDATE,
    WRITEDONE,
    SYNC_PENDING,
    BACKUP,
    CANCEL
};

// XYZ states
enum HarmanState {
    Success_Done,
    Inactive_Update,
    Improper_Write,
    Sync_In_Progress,
    Performing_Backup,
    CancelXYZ
};

// Function declaration
std::optional<std::string> MapQuectelStateToHarmanState(int userChoice);
