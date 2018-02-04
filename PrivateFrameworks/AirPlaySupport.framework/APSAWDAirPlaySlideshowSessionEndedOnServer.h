/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlaySlideshowSessionEndedOnServer : PBCodable <NSCopying> {
    unsigned int  _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int maxBPS : 1; 
        unsigned int maxPhotoBytes : 1; 
        unsigned int minBPS : 1; 
        unsigned int minPhotoBytes : 1; 
        unsigned int pauses : 1; 
        unsigned int reason : 1; 
        unsigned int skipAheads : 1; 
        unsigned int skipBacks : 1; 
        unsigned int totalPhotos : 1; 
    }  _has;
    unsigned int  _maxBPS;
    unsigned int  _maxPhotoBytes;
    unsigned int  _minBPS;
    unsigned int  _minPhotoBytes;
    unsigned int  _pauses;
    int  _reason;
    NSString * _sessionUUID;
    unsigned int  _skipAheads;
    unsigned int  _skipBacks;
    unsigned long long  _timestamp;
    unsigned int  _totalPhotos;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasMaxBPS;
@property (nonatomic) bool hasMaxPhotoBytes;
@property (nonatomic) bool hasMinBPS;
@property (nonatomic) bool hasMinPhotoBytes;
@property (nonatomic) bool hasPauses;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSkipAheads;
@property (nonatomic) bool hasSkipBacks;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalPhotos;
@property (nonatomic) unsigned int maxBPS;
@property (nonatomic) unsigned int maxPhotoBytes;
@property (nonatomic) unsigned int minBPS;
@property (nonatomic) unsigned int minPhotoBytes;
@property (nonatomic) unsigned int pauses;
@property (nonatomic) int reason;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int skipAheads;
@property (nonatomic) unsigned int skipBacks;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalPhotos;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasDuration;
- (bool)hasMaxBPS;
- (bool)hasMaxPhotoBytes;
- (bool)hasMinBPS;
- (bool)hasMinPhotoBytes;
- (bool)hasPauses;
- (bool)hasReason;
- (bool)hasSessionUUID;
- (bool)hasSkipAheads;
- (bool)hasSkipBacks;
- (bool)hasTimestamp;
- (bool)hasTotalPhotos;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxBPS;
- (unsigned int)maxPhotoBytes;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minBPS;
- (unsigned int)minPhotoBytes;
- (unsigned int)pauses;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)sessionUUID;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasMaxBPS:(bool)arg1;
- (void)setHasMaxPhotoBytes:(bool)arg1;
- (void)setHasMinBPS:(bool)arg1;
- (void)setHasMinPhotoBytes:(bool)arg1;
- (void)setHasPauses:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSkipAheads:(bool)arg1;
- (void)setHasSkipBacks:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalPhotos:(bool)arg1;
- (void)setMaxBPS:(unsigned int)arg1;
- (void)setMaxPhotoBytes:(unsigned int)arg1;
- (void)setMinBPS:(unsigned int)arg1;
- (void)setMinPhotoBytes:(unsigned int)arg1;
- (void)setPauses:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSkipAheads:(unsigned int)arg1;
- (void)setSkipBacks:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalPhotos:(unsigned int)arg1;
- (unsigned int)skipAheads;
- (unsigned int)skipBacks;
- (unsigned long long)timestamp;
- (unsigned int)totalPhotos;
- (void)writeTo:(id)arg1;

@end
