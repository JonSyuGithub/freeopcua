/// @author Alexander Rykovanov 2013
/// @email rykovanov.as@gmail.com
/// @brief View services addon.
/// @license GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#pragma once

#include <opc/ua/event.h>
#include <opc/ua/server/address_space.h>
#include <opc/ua/services/subscriptions.h>


namespace OpcUa
{
  namespace UaServer
  {

    class SubscriptionService
      : public Remote::SubscriptionServices 
    {
    public:
      DEFINE_CLASS_POINTERS(SubscriptionService);

      virtual void TriggerEvent(NodeID node, Event event) = 0;
    };

    SubscriptionService::UniquePtr CreateSubscriptionService(std::shared_ptr<AddressSpace> addressspace, bool debug);

  } // namespace UaServer
} // nmespace OpcUa