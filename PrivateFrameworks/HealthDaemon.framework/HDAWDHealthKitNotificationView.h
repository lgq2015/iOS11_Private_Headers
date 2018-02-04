/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitNotificationView : PBCodable <NSCopying> {
    int  _dismissReason;
    unsigned long long  _dwelltimeMs;
    long long  _endDate;
    struct { 
        unsigned int dwelltimeMs : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int dismissReason : 1; 
        unsigned int scrollBehavior : 1; 
    }  _has;
    int  _scrollBehavior;
    long long  _startDate;
}

@property (nonatomic) int dismissReason;
@property (nonatomic) unsigned long long dwelltimeMs;
@property (nonatomic) long long endDate;
@property (nonatomic) bool hasDismissReason;
@property (nonatomic) bool hasDwelltimeMs;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasScrollBehavior;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) int scrollBehavior;
@property (nonatomic) long long startDate;

- (int)StringAsDismissReason:(id)arg1;
- (int)StringAsScrollBehavior:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)dismissReason;
- (id)dismissReasonAsString:(int)arg1;
- (unsigned long long)dwelltimeMs;
- (long long)endDate;
- (bool)hasDismissReason;
- (bool)hasDwelltimeMs;
- (bool)hasEndDate;
- (bool)hasScrollBehavior;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)scrollBehavior;
- (id)scrollBehaviorAsString:(int)arg1;
- (void)setDismissReason:(int)arg1;
- (void)setDwelltimeMs:(unsigned long long)arg1;
- (void)setEndDate:(long long)arg1;
- (void)setHasDismissReason:(bool)arg1;
- (void)setHasDwelltimeMs:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasScrollBehavior:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setScrollBehavior:(int)arg1;
- (void)setStartDate:(long long)arg1;
- (long long)startDate;
- (void)writeTo:(id)arg1;

@end
