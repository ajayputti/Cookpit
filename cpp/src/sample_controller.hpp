#pragma once

#include "gen/http_observer.hpp"
#include "gen/sample_controller.hpp"

using namespace std;

namespace cookpit
{
class sample_controller_impl : public sample_controller,
                               public http_observer,
                               public enable_shared_from_this<sample_controller_impl> {
 public:
  void subscribe(const std::shared_ptr<sample_controller_observer>& observer) override;
  void unsubscribe() override;

 private:
  shared_ptr<sample_controller_observer> observer_;

  void on_failure() override;
  void on_success(const std::string& data) override;
};
}