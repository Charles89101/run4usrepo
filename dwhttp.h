#ifndef DWHTTP_H
#define DWHTTP_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QJsonObject>

typedef enum
{
    DW_REQUEST_PICTURE_LIST = 0,
    DW_REQUEST_PICTURE_DETAILS,
    DW_REQUEST_PICTURE_ADD,
    DW_REQUEST_PICTURE_EDIT,
    DW_REQUEST_PICTURE_DOWNLOAD,
    DW_REQUEST_PICTURE_DISPLAY,
    DW_REQUEST_ALBUM_LIST,
    DW_REQUEST_ALBUM_ADD,
    DW_REQUEST_ALBUM_DETAILS,
    DW_REQUEST_ALBUM_PHOTO_ADD,
    DW_REQUEST_PROFILE_DETAILS,
    DW_REQUEST_CATALOG_LIST,
    DW_REQUEST_CATALOG_DETAILS,
} DW_HTTP_REQUEST;

typedef struct
{
    DW_HTTP_REQUEST request;
    QString url;
} REQUEST_URL_MAP;



class dwHTTP
{
public:
    dwHTTP();
    bool sendPhotoListRequest(int start, QString order, QString orderBy);
    bool sendPhotoDetailRequest(int request_id);
    bool sendDownloadRequest(int request_id);
    bool sendDisplayRequest(int request_id);
    bool sendAlbumListRequest(int start, QString orderby, QString order);
    bool sendAlbumAddRequest(QString name, int parent_id);
    bool sendAlbunDetails(int album_id);
    bool sendProfileDetails();
    bool sendRequest(QString url, QByteArray params);

    QString getResult();
    void setApiKey(QString key);

    const REQUEST_URL_MAP requst_url_map[13] =
    {
        {DW_REQUEST_PICTURE_LIST,           "https://dev.aipix.us/api/authorized/request/list-api"},
        {DW_REQUEST_PICTURE_DETAILS,        "https://dev.aipix.us/api/authorized/request/details-api"},
        {DW_REQUEST_PICTURE_ADD,            "https://dev.aipix.us/api/authorized/request/add-api"},
        {DW_REQUEST_PICTURE_EDIT,           "https://dev.aipix.us/api/authorized/request/edit-api"},
        {DW_REQUEST_PICTURE_DOWNLOAD,       "https://dev.aipix.us/api/authorized/request/download-request-api"},
        {DW_REQUEST_PICTURE_DISPLAY,        "https://dev.aipix.us/api/authorized/request/add-private-public-api"},
        {DW_REQUEST_ALBUM_LIST,             "https://dev.aipix.us/api/authorized/album/list-api"},
        {DW_REQUEST_ALBUM_ADD,              "https://dev.aipix.us/api/authorized/album/add-api"},
        {DW_REQUEST_ALBUM_DETAILS,          "https://dev.aipix.us/api/authorized/album/details-api"},
        {DW_REQUEST_ALBUM_PHOTO_ADD,        "https://dev.aipix.us/api/authorized/album/add-photo-api"},
        {DW_REQUEST_PROFILE_DETAILS,        "https://dev.aipix.us/api/authorized/profile/details-api"},
        {DW_REQUEST_CATALOG_LIST,           "https://dev.aipix.us/api/authorized/catalog/list"},
        {DW_REQUEST_CATALOG_DETAILS,        "https://dev.aipix.us/api/authorized/catalog/details"},
    };

private:
    QString result;
    QString apikey;
    QString getRequestUrl(DW_HTTP_REQUEST request);

};

#endif // DWHTTP_H
