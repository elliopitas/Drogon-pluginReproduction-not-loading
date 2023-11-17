#include "test.h"

using namespace drogon;

void test::initAndStart(const Json::Value &config){
	LOG_INFO<<"test is starting";
}

void test::shutdown(){
	LOG_INFO<<"test shutting down";
}
