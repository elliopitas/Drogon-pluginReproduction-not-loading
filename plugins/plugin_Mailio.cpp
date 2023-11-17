#include "plugin_Mailio.hpp"

using namespace drogon;
using namespace plugin;

void Mailio::initAndStart(const Json::Value &config){
	email=config["email"].asString();
	password=config["password"].asString();
	smtpAddress=config["smtpAddress"].asString();
	smtpPort=config["smtpPort"].asUInt();
	if(email.empty())
		throw MailioException("configuration error: email is required");
	if(password.empty())
		throw MailioException("configuration error: password is required");
	if(smtpAddress.empty())
		throw MailioException("configuration error: smtpAddress is required");
	if(smtpPort==0)
		throw MailioException("configuration error: smtpPort is required");
	LOG_INFO<<"mailio initiated";
}

void Mailio::shutdown(){

}