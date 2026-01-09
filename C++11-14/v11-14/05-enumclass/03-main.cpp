#include "FilePermissions.h"
#include <print>

int main()
{
    auto read_write = FilePermissions::Read | FilePermissions::Write;
    auto all_perms = FilePermissions::Read | FilePermissions::Write | FilePermissions::Execute;
    std::println("Read+Write permissions: {}", permissions_to_string(read_write));
    std::println("All permissions: {}", permissions_to_string(all_perms));
    std::println("Read+Write has Read: {}", has_permission(read_write, FilePermissions::Read) ? "Yes" : "No");
    std::println("Read+Write has Write: {}", has_permission(read_write, FilePermissions::Write) ? "Yes" : "No");
    std::println("Read+Write has Execute: {}", has_permission(read_write, FilePermissions::Execute) ? "Yes" : "No");
    auto read_only = FilePermissions::Read;
    std::println("Read only has Read: {}", has_permission(read_only, FilePermissions::Read) ? "Yes" : "No");
    std::println("Read only has Write: {}", has_permission(read_only, FilePermissions::Write) ? "Yes" : "No");
    return 0;
}