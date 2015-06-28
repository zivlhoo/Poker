//
//  Http.cpp
//  cocoskit
//
//  Created by ZivHoo on 15/6/21.
//  Copyright (c) 2015年 ZivHoo. All rights reserved.
//
#include "Http.h"

USING_NS_CC;
using namespace std;
using namespace network;

Http::Http(ResponseCallback callback):
_callback(callback)
{
}

Http::~Http()
{
    _callback = nullptr;
}

void Http::send(string tag, string url, HttpRequest::Type type, map<string,string>* postData){
    
    auto request = new HttpRequest;
    request->setTag(tag.c_str());
    //    request->setHeaders()
    request->setRequestType(type);
    request->setResponseCallback([&](HttpClient* client, HttpResponse* response){
        
        if (!response) {
            CCLOG("response is nullptr");
            return ;
        }
        
        if (!response->isSucceed()) {
            CCLOG("response failed");
            return ;
        }
        
        if (_callback)
        {
            string responseStr;
            
            auto tag = response->getHttpRequest()->getTag();
            auto data = response->getResponseData();
            
            if (data && !data->empty()) {
                responseStr = string(data->begin(),data->end());
            }
            _callback(tag, responseStr);
        }
    });
    
    if (postData) {
        string str;
        
        for (auto v : *postData) str.append(v.first).append("=").append(v.second).append("&");
        
        auto lastIndex = str.length() - 1;
        str.erase(lastIndex);
        
        if (HttpRequest::Type::GET == type) {
            url.append("?").append(str);
        }else{
            request->setRequestData(str.c_str(), lastIndex);
        }
    }
    
    request->setUrl(url.c_str());
    HttpClient::getInstance()->send(request);
    request->release();
}

void Http::get(string tag, string url, map<string,string>* postData)
{
    send(tag, url, HttpRequest::Type::GET, postData);
}

void Http::post(string tag, string url, map<string,string>* postData)
{
    send(tag, url, HttpRequest::Type::POST, postData);
}

void Http::setCallback(ResponseCallback callback)
{
    _callback = callback;
}