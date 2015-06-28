//
//  Http.h
//  cocoskit
//
//  Created by ZivHoo on 15/6/21.
//  Copyright (c) 2015年 ZivHoo. All rights reserved.
//

#ifndef __cocoskit__Http__
#define __cocoskit__Http__

#include <map>
#include <string>
#include "network/HttpClient.h"

typedef std::function<void(std::string tag, std::string receiveStr)> ResponseCallback;

class Http {
    
public:
    
    Http(ResponseCallback=nullptr);
    ~Http();
    
    void get(std::string tag, std::string url, std::map<std::string,std::string>* postData = nullptr);
    void post(std::string tag, std::string url, std::map<std::string,std::string>* postData = nullptr);
    
    void setCallback(ResponseCallback);
    
protected:
    
    void send(std::string tag, std::string url, cocos2d::network::HttpRequest::Type, std::map<std::string,std::string>* postData);
    
private:
    
    ResponseCallback _callback;
    
};

#endif /* defined(__cocoskit__Http__) */
