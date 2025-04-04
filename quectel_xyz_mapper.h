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
class QuectelToHarmanMapper {
public:
    std::string getHarmanState(QuectelState state){
        switch (state) {
            case SUCCEED: return "Success";
            case UPDATE: return "INACTIVE UPDATE";
            case WRITEDONE: return "IMPROPER WRITE";
            case SYNC_PENDING: return "SYNC IN PROGRESS";
            case BACKUP: return "PERFORMING BACKUP";
            case CANCEL: return "Cancel";
            default: return "Invalid State";
        }
    }
};

