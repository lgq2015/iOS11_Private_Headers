/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitConcurrentCalendarItem : PBCodable <NSCopying> {
    long long  _endDate;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int isBusy : 1; 
    }  _has;
    bool  _isBusy;
    long long  _startDate;
}

@property (nonatomic) long long endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasIsBusy;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool isBusy;
@property (nonatomic) long long startDate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endDate;
- (bool)hasEndDate;
- (bool)hasIsBusy;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isBusy;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(long long)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasIsBusy:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setIsBusy:(bool)arg1;
- (void)setStartDate:(long long)arg1;
- (long long)startDate;
- (void)writeTo:(id)arg1;

@end
