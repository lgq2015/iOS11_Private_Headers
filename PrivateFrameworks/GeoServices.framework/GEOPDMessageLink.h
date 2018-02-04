/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMessageLink : PBCodable <NSCopying> {
    struct { 
        unsigned int responseTime : 1; 
    }  _has;
    NSMutableArray * _hoursOfOperations;
    NSString * _messageId;
    NSString * _messageUrl;
    int  _responseTime;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic, readonly) bool hasMessageUrl;
@property (nonatomic) bool hasResponseTime;
@property (nonatomic, readonly) bool hasTimezone;
@property (nonatomic, retain) NSMutableArray *hoursOfOperations;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic, retain) NSString *messageUrl;
@property (nonatomic) int responseTime;
@property (nonatomic, retain) GEOTimezone *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)hoursOfOperationType;
+ (id)messageLinkForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsResponseTime:(id)arg1;
- (void)addHoursOfOperation:(id)arg1;
- (void)clearHoursOfOperations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageId;
- (bool)hasMessageUrl;
- (bool)hasResponseTime;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (id)hoursOfOperationAtIndex:(unsigned long long)arg1;
- (id)hoursOfOperations;
- (unsigned long long)hoursOfOperationsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (id)messageUrl;
- (bool)readFrom:(id)arg1;
- (int)responseTime;
- (id)responseTimeAsString:(int)arg1;
- (void)setHasResponseTime:(bool)arg1;
- (void)setHoursOfOperations:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageUrl:(id)arg1;
- (void)setResponseTime:(int)arg1;
- (void)setTimezone:(id)arg1;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
