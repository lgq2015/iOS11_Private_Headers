/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBEndpointConfig : PBCodable <NSCopying> {
    NSString * _analyticsEndpointUrlsJson;
    NSString * _analyticsEnvelopeContentTypePropJson;
    NSString * _clientApiBaseUrl;
    int  _environment;
    NSString * _eventRelayBaseUrl;
    NSString * _eventRelayBatchBaseUrl;
    NSString * _newsNotificationsBaseUrl;
}

@property (nonatomic, retain) NSString *analyticsEndpointUrlsJson;
@property (nonatomic, retain) NSString *analyticsEnvelopeContentTypePropJson;
@property (nonatomic, retain) NSString *clientApiBaseUrl;
@property (nonatomic) int environment;
@property (nonatomic, retain) NSString *eventRelayBaseUrl;
@property (nonatomic, retain) NSString *eventRelayBatchBaseUrl;
@property (nonatomic, readonly) bool hasAnalyticsEndpointUrlsJson;
@property (nonatomic, readonly) bool hasAnalyticsEnvelopeContentTypePropJson;
@property (nonatomic, readonly) bool hasClientApiBaseUrl;
@property (nonatomic, readonly) bool hasEventRelayBaseUrl;
@property (nonatomic, readonly) bool hasEventRelayBatchBaseUrl;
@property (nonatomic, readonly) bool hasNewsNotificationsBaseUrl;
@property (nonatomic, retain) NSString *newsNotificationsBaseUrl;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (id)analyticsEndpointUrlsJson;
- (id)analyticsEnvelopeContentTypePropJson;
- (id)clientApiBaseUrl;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)environment;
- (id)eventRelayBaseUrl;
- (id)eventRelayBatchBaseUrl;
- (bool)hasAnalyticsEndpointUrlsJson;
- (bool)hasAnalyticsEnvelopeContentTypePropJson;
- (bool)hasClientApiBaseUrl;
- (bool)hasEventRelayBaseUrl;
- (bool)hasEventRelayBatchBaseUrl;
- (bool)hasNewsNotificationsBaseUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newsNotificationsBaseUrl;
- (bool)readFrom:(id)arg1;
- (void)setAnalyticsEndpointUrlsJson:(id)arg1;
- (void)setAnalyticsEnvelopeContentTypePropJson:(id)arg1;
- (void)setClientApiBaseUrl:(id)arg1;
- (void)setEnvironment:(int)arg1;
- (void)setEventRelayBaseUrl:(id)arg1;
- (void)setEventRelayBatchBaseUrl:(id)arg1;
- (void)setNewsNotificationsBaseUrl:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)analyticsEnvelopeContentTypeConfigsByContentType;

@end
