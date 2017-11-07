#include <string>
#include <functional>
#include <ApiCodec/ApiCommandPacket.hpp>
#include <cstdlib>
#include "exceptions.hh"
#include "constants.hh"
#include "Display/Display.hh"
#include "Gateway/Gateway.hh"
#include "Oz/Oz.hh"

namespace Playground
{

  class Playground
  {    
  private:
    Gateway::Gateway gateway;
    Oz::Oz oz;
    Display::Display display;

    int run(void);

  public:
    explicit Playground(const std::string &, uint16_t, uint16_t);
    ~Playground() {};

    Oz::Oz & getOz(void);
    Gateway::Gateway & getGateway(void);
    Display::Display & getDisplay(void);
  };

}
