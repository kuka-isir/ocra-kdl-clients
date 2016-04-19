#ifndef EXAMPLE_CLIENT_H
#define EXAMPLE_CLIENT_H

#include <ocra-recipes/TrajectoryThread.h>
#include <ocra-recipes/ControllerClient.h>

class TestClient : public ocra_recipes::ControllerClient
{

public:
    TestClient (std::shared_ptr<ocra::Model> modelPtr, const int loopPeriod);
    virtual ~TestClient ();

protected:
    virtual bool initialize();
    virtual void release();
    virtual void loop();

private:
    bool trigger;

};

#endif // EXAMPLE_CLIENT_H
