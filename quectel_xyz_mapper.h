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
std::string success_done(){
 return "Success";
}
std::string inactive_update(){
    return "INACTIVE UPDATE";
}
std::string improper_write(){
    return "IMPROPER WRITE";
}
std::string sync_in_progress(){
    return "SYNC IN PROGRESS";
}
std::string perform_backup(){
    return "PERFORMING BACKUP";
}
std::string cancel(){
    return "Cancel";
}

// Mapper class that maps Quectel states to XYZ strings
class QuectelToXYZMapper {
public:
    std::string getXYZState(QuectelState state){
        switch (state) {
            case SUCCEED: return success_done();
            case UPDATE: return inactive_update();
            case WRITEDONE: return improper_write();
            case SYNC_PENDING: return sync_in_progress();
            case BACKUP: return perform_backup();
            case CANCEL: return cancel();
            // default: return "Invalid State";
        }
    }
};

