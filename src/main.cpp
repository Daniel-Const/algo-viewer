#include "../include/application.h"

int main(int argc, char *argv[])
{

    // Create application instance
    Application application = Application(600, 500);

    // run application
    application.run();

    // destory application instance

    return 0;
}