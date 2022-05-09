#include "dwhttp.h"


dwHTTP::dwHTTP()
{

}



bool sendPhotoListRequest(int start, QString order, QString orderBy)
{

}


bool sendRequest(QString url, QByteArray params)
{

}


void dwHTTP::setApiKey(QString key)
{
    this->apikey = key;
}

QString dwHTTP::getResult()
{
    return this->getResult();
}

QString dwHTTP::getRequestUrl(DW_HTTP_REQUEST request)
{
    for (int i = 0; i < sizeof(requst_url_map) / sizeof(REQUEST_URL_MAP); i++)
    {
        if (request == this->requst_url_map[i].request)
            return requst_url_map[i].url;
    }

    return NULL;
}

