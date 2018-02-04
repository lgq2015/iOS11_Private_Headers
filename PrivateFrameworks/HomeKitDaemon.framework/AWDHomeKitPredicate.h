/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitPredicate : PBCodable <NSCopying> {
    bool  _containsCalendarTime;
    bool  _containsCharacteristicValue;
    bool  _containsSignificantTime;
    bool  _containsSignificantTimeOffset;
    struct { 
        unsigned int containsCalendarTime : 1; 
        unsigned int containsCharacteristicValue : 1; 
        unsigned int containsSignificantTime : 1; 
        unsigned int containsSignificantTimeOffset : 1; 
    }  _has;
    NSMutableArray * _presenceEvents;
}

@property (nonatomic) bool containsCalendarTime;
@property (nonatomic) bool containsCharacteristicValue;
@property (nonatomic) bool containsSignificantTime;
@property (nonatomic) bool containsSignificantTimeOffset;
@property (nonatomic) bool hasContainsCalendarTime;
@property (nonatomic) bool hasContainsCharacteristicValue;
@property (nonatomic) bool hasContainsSignificantTime;
@property (nonatomic) bool hasContainsSignificantTimeOffset;
@property (nonatomic, retain) NSMutableArray *presenceEvents;

+ (Class)presenceEventsType;

- (void).cxx_destruct;
- (void)addPresenceEvents:(id)arg1;
- (void)clearPresenceEvents;
- (bool)containsCalendarTime;
- (bool)containsCharacteristicValue;
- (bool)containsSignificantTime;
- (bool)containsSignificantTimeOffset;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainsCalendarTime;
- (bool)hasContainsCharacteristicValue;
- (bool)hasContainsSignificantTime;
- (bool)hasContainsSignificantTimeOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)presenceEvents;
- (id)presenceEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)presenceEventsCount;
- (bool)readFrom:(id)arg1;
- (void)setContainsCalendarTime:(bool)arg1;
- (void)setContainsCharacteristicValue:(bool)arg1;
- (void)setContainsSignificantTime:(bool)arg1;
- (void)setContainsSignificantTimeOffset:(bool)arg1;
- (void)setHasContainsCalendarTime:(bool)arg1;
- (void)setHasContainsCharacteristicValue:(bool)arg1;
- (void)setHasContainsSignificantTime:(bool)arg1;
- (void)setHasContainsSignificantTimeOffset:(bool)arg1;
- (void)setPresenceEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
