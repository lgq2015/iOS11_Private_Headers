/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBExternalAnalyticsEventSend : PBCodable <NSCopying> {
    NSString * _contentViewedId;
    NSString * _eventUdid;
    int  _externalAnalyticsEventType;
    NSString * _externalAnalyticsId;
    NSString * _failureReasonCode;
    struct { 
        unsigned int externalAnalyticsEventType : 1; 
        unsigned int resultType : 1; 
    }  _has;
    int  _resultType;
    NSString * _sourceChannelId;
}

@property (nonatomic, retain) NSString *contentViewedId;
@property (nonatomic, retain) NSString *eventUdid;
@property (nonatomic) int externalAnalyticsEventType;
@property (nonatomic, retain) NSString *externalAnalyticsId;
@property (nonatomic, retain) NSString *failureReasonCode;
@property (nonatomic, readonly) bool hasContentViewedId;
@property (nonatomic, readonly) bool hasEventUdid;
@property (nonatomic) bool hasExternalAnalyticsEventType;
@property (nonatomic, readonly) bool hasExternalAnalyticsId;
@property (nonatomic, readonly) bool hasFailureReasonCode;
@property (nonatomic) bool hasResultType;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) int resultType;
@property (nonatomic, retain) NSString *sourceChannelId;

- (void).cxx_destruct;
- (id)contentViewedId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventUdid;
- (int)externalAnalyticsEventType;
- (id)externalAnalyticsId;
- (id)failureReasonCode;
- (bool)hasContentViewedId;
- (bool)hasEventUdid;
- (bool)hasExternalAnalyticsEventType;
- (bool)hasExternalAnalyticsId;
- (bool)hasFailureReasonCode;
- (bool)hasResultType;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (void)setContentViewedId:(id)arg1;
- (void)setEventUdid:(id)arg1;
- (void)setExternalAnalyticsEventType:(int)arg1;
- (void)setExternalAnalyticsId:(id)arg1;
- (void)setFailureReasonCode:(id)arg1;
- (void)setHasExternalAnalyticsEventType:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setResultType:(int)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end
