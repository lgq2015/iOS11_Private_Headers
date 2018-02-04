/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingCoordinatedAlertResult : PBCodable <NSCopying> {
    unsigned int  _activityLevel;
    bool  _bestIsMe;
    unsigned int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int activityLevel : 1; 
        unsigned int eventType : 1; 
        unsigned int otherDevices : 1; 
        unsigned int bestIsMe : 1; 
        unsigned int skipScanPhoneCall : 1; 
        unsigned int skipScanVeryActive : 1; 
    }  _has;
    int  _otherDevices;
    bool  _skipScanPhoneCall;
    bool  _skipScanVeryActive;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int activityLevel;
@property (nonatomic) bool bestIsMe;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) bool hasActivityLevel;
@property (nonatomic) bool hasBestIsMe;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasOtherDevices;
@property (nonatomic) bool hasSkipScanPhoneCall;
@property (nonatomic) bool hasSkipScanVeryActive;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int otherDevices;
@property (nonatomic) bool skipScanPhoneCall;
@property (nonatomic) bool skipScanVeryActive;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)activityLevel;
- (bool)bestIsMe;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (bool)hasActivityLevel;
- (bool)hasBestIsMe;
- (bool)hasEventType;
- (bool)hasOtherDevices;
- (bool)hasSkipScanPhoneCall;
- (bool)hasSkipScanVeryActive;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)otherDevices;
- (bool)readFrom:(id)arg1;
- (void)setActivityLevel:(unsigned int)arg1;
- (void)setBestIsMe:(bool)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasActivityLevel:(bool)arg1;
- (void)setHasBestIsMe:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasOtherDevices:(bool)arg1;
- (void)setHasSkipScanPhoneCall:(bool)arg1;
- (void)setHasSkipScanVeryActive:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOtherDevices:(int)arg1;
- (void)setSkipScanPhoneCall:(bool)arg1;
- (void)setSkipScanVeryActive:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)skipScanPhoneCall;
- (bool)skipScanVeryActive;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
