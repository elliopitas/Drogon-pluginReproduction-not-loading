#pragma once

#include <drogon/plugins/Plugin.h>

namespace plugin{
	struct MailioException:public std::runtime_error{
		MailioException(const std::string& error):std::runtime_error(error){}
	};
	class Mailio : public drogon::Plugin<Mailio>{
	private:
		std::string email, password, smtpAddress;
		unsigned int smtpPort;
	public:
		Mailio() = default;
		/// This method must be called by drogon to initialize and start the plugin.
		/// It must be implemented by the user.
		void initAndStart(const Json::Value &config) override;

		/// This method must be called by drogon to shutdown the plugin.
		/// It must be implemented by the user.
		void shutdown() override;
	};
}

