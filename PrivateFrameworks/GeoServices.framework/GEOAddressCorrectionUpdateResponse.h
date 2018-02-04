/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int retryScheduleInDays : 1; 
    }  _has;
    unsigned int  _retryScheduleInDays;
}

@property (nonatomic) bool hasRetryScheduleInDays;
@property (nonatomic) unsigned int retryScheduleInDays;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRetryScheduleInDays;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)retryScheduleInDays;
- (void)setHasRetryScheduleInDays:(bool)arg1;
- (void)setRetryScheduleInDays:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
