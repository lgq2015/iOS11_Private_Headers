/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDCKTimeRange : PBCodable <NSCopying> {
    double  _end;
    long long  _endUTCOffsetSeconds;
    bool  _floating;
    struct { 
        unsigned int end : 1; 
        unsigned int endUTCOffsetSeconds : 1; 
        unsigned int start : 1; 
        unsigned int startUTCOffsetSeconds : 1; 
        unsigned int floating : 1; 
    }  _has;
    double  _start;
    long long  _startUTCOffsetSeconds;
}

@property (nonatomic) double end;
@property (nonatomic) long long endUTCOffsetSeconds;
@property (nonatomic) bool floating;
@property (nonatomic) bool hasEnd;
@property (nonatomic) bool hasEndUTCOffsetSeconds;
@property (nonatomic) bool hasFloating;
@property (nonatomic) bool hasStart;
@property (nonatomic) bool hasStartUTCOffsetSeconds;
@property (nonatomic) double start;
@property (nonatomic) long long startUTCOffsetSeconds;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)end;
- (long long)endUTCOffsetSeconds;
- (bool)floating;
- (bool)hasEnd;
- (bool)hasEndUTCOffsetSeconds;
- (bool)hasFloating;
- (bool)hasStart;
- (bool)hasStartUTCOffsetSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnd:(double)arg1;
- (void)setEndUTCOffsetSeconds:(long long)arg1;
- (void)setFloating:(bool)arg1;
- (void)setHasEnd:(bool)arg1;
- (void)setHasEndUTCOffsetSeconds:(bool)arg1;
- (void)setHasFloating:(bool)arg1;
- (void)setHasStart:(bool)arg1;
- (void)setHasStartUTCOffsetSeconds:(bool)arg1;
- (void)setStart:(double)arg1;
- (void)setStartUTCOffsetSeconds:(long long)arg1;
- (double)start;
- (long long)startUTCOffsetSeconds;
- (void)writeTo:(id)arg1;

@end
