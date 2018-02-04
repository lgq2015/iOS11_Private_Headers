/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying> {
    bool  _avoidHighways;
    bool  _avoidTolls;
    bool  _findMyCarEnabled;
    struct { 
        unsigned int navVoiceVolume : 1; 
        unsigned int preferredTransportMode : 1; 
        unsigned int avoidHighways : 1; 
        unsigned int avoidTolls : 1; 
        unsigned int findMyCarEnabled : 1; 
        unsigned int headingEnabled : 1; 
        unsigned int labelEnabled : 1; 
        unsigned int pauseSpokenAudioEnabled : 1; 
        unsigned int speedLimitEnabled : 1; 
        unsigned int trafficEnabled : 1; 
    }  _has;
    bool  _headingEnabled;
    bool  _labelEnabled;
    int  _navVoiceVolume;
    bool  _pauseSpokenAudioEnabled;
    int  _preferredTransportMode;
    bool  _speedLimitEnabled;
    bool  _trafficEnabled;
}

@property (nonatomic) bool avoidHighways;
@property (nonatomic) bool avoidTolls;
@property (nonatomic) bool findMyCarEnabled;
@property (nonatomic) bool hasAvoidHighways;
@property (nonatomic) bool hasAvoidTolls;
@property (nonatomic) bool hasFindMyCarEnabled;
@property (nonatomic) bool hasHeadingEnabled;
@property (nonatomic) bool hasLabelEnabled;
@property (nonatomic) bool hasNavVoiceVolume;
@property (nonatomic) bool hasPauseSpokenAudioEnabled;
@property (nonatomic) bool hasPreferredTransportMode;
@property (nonatomic) bool hasSpeedLimitEnabled;
@property (nonatomic) bool hasTrafficEnabled;
@property (nonatomic) bool headingEnabled;
@property (nonatomic) bool labelEnabled;
@property (nonatomic) int navVoiceVolume;
@property (nonatomic) bool pauseSpokenAudioEnabled;
@property (nonatomic) int preferredTransportMode;
@property (nonatomic) bool speedLimitEnabled;
@property (nonatomic) bool trafficEnabled;

- (int)StringAsNavVoiceVolume:(id)arg1;
- (int)StringAsPreferredTransportMode:(id)arg1;
- (bool)avoidHighways;
- (bool)avoidTolls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)findMyCarEnabled;
- (bool)hasAvoidHighways;
- (bool)hasAvoidTolls;
- (bool)hasFindMyCarEnabled;
- (bool)hasHeadingEnabled;
- (bool)hasLabelEnabled;
- (bool)hasNavVoiceVolume;
- (bool)hasPauseSpokenAudioEnabled;
- (bool)hasPreferredTransportMode;
- (bool)hasSpeedLimitEnabled;
- (bool)hasTrafficEnabled;
- (unsigned long long)hash;
- (bool)headingEnabled;
- (bool)isEqual:(id)arg1;
- (bool)labelEnabled;
- (void)mergeFrom:(id)arg1;
- (int)navVoiceVolume;
- (id)navVoiceVolumeAsString:(int)arg1;
- (bool)pauseSpokenAudioEnabled;
- (int)preferredTransportMode;
- (id)preferredTransportModeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvoidHighways:(bool)arg1;
- (void)setAvoidTolls:(bool)arg1;
- (void)setFindMyCarEnabled:(bool)arg1;
- (void)setHasAvoidHighways:(bool)arg1;
- (void)setHasAvoidTolls:(bool)arg1;
- (void)setHasFindMyCarEnabled:(bool)arg1;
- (void)setHasHeadingEnabled:(bool)arg1;
- (void)setHasLabelEnabled:(bool)arg1;
- (void)setHasNavVoiceVolume:(bool)arg1;
- (void)setHasPauseSpokenAudioEnabled:(bool)arg1;
- (void)setHasPreferredTransportMode:(bool)arg1;
- (void)setHasSpeedLimitEnabled:(bool)arg1;
- (void)setHasTrafficEnabled:(bool)arg1;
- (void)setHeadingEnabled:(bool)arg1;
- (void)setLabelEnabled:(bool)arg1;
- (void)setNavVoiceVolume:(int)arg1;
- (void)setPauseSpokenAudioEnabled:(bool)arg1;
- (void)setPreferredTransportMode:(int)arg1;
- (void)setSpeedLimitEnabled:(bool)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (bool)speedLimitEnabled;
- (bool)trafficEnabled;
- (void)writeTo:(id)arg1;

@end
