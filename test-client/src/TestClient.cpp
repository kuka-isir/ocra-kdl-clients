#include "test-client/TestClient.h"

TestClient::TestClient(std::shared_ptr<ocra::Model> modelPtr, const int loopPeriod)
: ocra_recipes::ControllerClient(modelPtr, loopPeriod)
{
    // poopoo
}

TestClient::~TestClient()
{
    //caca
}

bool TestClient::initialize()
{
    trigger = true;
    return true;
}

void TestClient::release()
{
    /* Do nothing. */
}

void TestClient::loop()
{
    
    yarp::os::Time::delay(1.0);
    removeTask("cartEndEffector");
    yarp::os::Time::delay(1.0);
    addTasks("/home/hoarau/tmp_tasks.xml",false);

}
