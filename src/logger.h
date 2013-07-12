#ifndef LOGGER_DEFINED
#define LOGGER_DEFINED

#include <cstdio>

#include "pluginapi.h"

#define LOG(level, message, ...) instantSend->logger().flog(level, message, ## __VA_ARGS__)

namespace InstantSend {

class BasicLogger : public Logger {
	public:
		inline BasicLogger(FILE *output, bool autoClose = false) : mOutFile(output), mAutoClose(autoClose) {}
		void log(Logger::Level level, const std::string &message);
		void log(Logger::Level level, const std::string &message, const std::string &pluginName);
		~BasicLogger();

	private:
		FILE *mOutFile;
		bool mAutoClose;
};

}

#endif