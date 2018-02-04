/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOListResultItem : PBCodable <NSCopying> {
    unsigned long long  _businessId;
    bool  _eventuallyVisible;
    struct { 
        unsigned int businessId : 1; 
        unsigned int latency : 1; 
        unsigned int resultType : 1; 
        unsigned int tappedCount : 1; 
        unsigned int eventuallyVisible : 1; 
        unsigned int initiallyVisible : 1; 
    }  _has;
    bool  _initiallyVisible;
    long long  _latency;
    int  _resultType;
    int  _tappedCount;
}

@property (nonatomic) unsigned long long businessId;
@property (nonatomic) bool eventuallyVisible;
@property (nonatomic) bool hasBusinessId;
@property (nonatomic) bool hasEventuallyVisible;
@property (nonatomic) bool hasInitiallyVisible;
@property (nonatomic) bool hasLatency;
@property (nonatomic) bool hasResultType;
@property (nonatomic) bool hasTappedCount;
@property (nonatomic) bool initiallyVisible;
@property (nonatomic) long long latency;
@property (nonatomic) int resultType;
@property (nonatomic) int tappedCount;

- (int)StringAsResultType:(id)arg1;
- (unsigned long long)businessId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)eventuallyVisible;
- (bool)hasBusinessId;
- (bool)hasEventuallyVisible;
- (bool)hasInitiallyVisible;
- (bool)hasLatency;
- (bool)hasResultType;
- (bool)hasTappedCount;
- (unsigned long long)hash;
- (bool)initiallyVisible;
- (bool)isEqual:(id)arg1;
- (long long)latency;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (id)resultTypeAsString:(int)arg1;
- (void)setBusinessId:(unsigned long long)arg1;
- (void)setEventuallyVisible:(bool)arg1;
- (void)setHasBusinessId:(bool)arg1;
- (void)setHasEventuallyVisible:(bool)arg1;
- (void)setHasInitiallyVisible:(bool)arg1;
- (void)setHasLatency:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setHasTappedCount:(bool)arg1;
- (void)setInitiallyVisible:(bool)arg1;
- (void)setLatency:(long long)arg1;
- (void)setResultType:(int)arg1;
- (void)setTappedCount:(int)arg1;
- (int)tappedCount;
- (void)writeTo:(id)arg1;

@end