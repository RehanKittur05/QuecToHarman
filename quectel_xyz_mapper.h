// quectel_xyz_mapper.h


#include <string>

// Enum for Quectel API states
enum QuectelState {
    SUCCEED,
    UPDATE,
    WRITEDONE,
    SYNC_PENDING,
    BACKUP,
    CANCEL
};

// Mapper class that maps Quectel states to XYZ strings
class QuectelToXYZMapper {
public:
    std::string getXYZState(QuectelState state){
        switch (state) {
            case SUCCEED: return "Success";
            case UPDATE: return "Inactive_update";
            case WRITEDONE: return "Improper_write";
            case SYNC_PENDING: return "sync_in_progress";
            case BACKUP: return "performing_backup";
            case CANCEL: return "cancel";
            // default: return "Invalid State";
        }
    }
};

