#include "../include/application.h"

int main(int argc, char *argv[])
{
    Application application = Application(600, 500);
    application.run();
    application.close();

    return 0;
}