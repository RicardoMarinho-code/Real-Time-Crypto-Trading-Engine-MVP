#include "security/authentication.h"
#include "trading/executor.h"
#include "trading/executor.h"
#include "include/config.h"
#include "engine/engine.h"
#include "engine/engine.h"
#include "ui/dashboard.h"
#include "utils/logger.h"
#include "db/database.h"
#include "db/database.h"
#include <stdio.h>

int main() {
    init_logger();
    load_config();

    if (!authenticate_user("admin", "123456")) {
        log_error("Autenticação falhou.");
        return 1;
    }

    init_database();
    init_engine();
    launch_dashboard();

    while (1) {
        poll_market_data();
        execute_trades();
        update_ui();
    }

    return 0;
}
