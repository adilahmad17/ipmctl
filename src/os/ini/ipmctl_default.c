#if defined(__LINUX__) || defined(__ESX__)
#define LOG_INSTALL_PATH "/var/log/ipmctl/"
#else
#define LOG_INSTALL_PATH "%APPDATA%\\Intel\\ipmctl\\"
#endif
#include "ipmctl_default.h"
