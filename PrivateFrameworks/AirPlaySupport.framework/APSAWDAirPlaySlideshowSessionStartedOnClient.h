/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlaySlideshowSessionStartedOnClient : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int repeat : 1; 
        unsigned int slideMs : 1; 
        unsigned int status : 1; 
    }  _has;
    unsigned int  _repeat;
    NSString * _sessionUUID;
    unsigned int  _slideMs;
    int  _status;
    NSString * _theme;
    unsigned long long  _timestamp;
    NSString * _transition;
}

@property (nonatomic) bool hasRepeat;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSlideMs;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasTheme;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransition;
@property (nonatomic) unsigned int repeat;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int slideMs;
@property (nonatomic) int status;
@property (nonatomic, retain) NSString *theme;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *transition;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRepeat;
- (bool)hasSessionUUID;
- (bool)hasSlideMs;
- (bool)hasStatus;
- (bool)hasTheme;
- (bool)hasTimestamp;
- (bool)hasTransition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)repeat;
- (id)sessionUUID;
- (void)setHasRepeat:(bool)arg1;
- (void)setHasSlideMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRepeat:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSlideMs:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTheme:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransition:(id)arg1;
- (unsigned int)slideMs;
- (int)status;
- (id)theme;
- (unsigned long long)timestamp;
- (id)transition;
- (void)writeTo:(id)arg1;

@end
