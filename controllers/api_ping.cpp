#include "api_ping.hpp"
#include "plugins/plugin_Mailio.hpp"

using namespace api;

drogon::AsyncTask test::ping(const HttpRequestPtr request, std::function<void (const HttpResponsePtr &)> callback){
	auto plugin=app().getPlugin<plugin::Mailio>();
	LOG_INFO<<((plugin==NULL)?"plugin not found":"plugin found");
	auto resp=HttpResponse::newHttpResponse();
	resp->setBody("pong");
	callback(resp);
	co_return;
}
