/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCapabilities : NSObject <NSCoding> {
    unsigned int  actualAudioCodec;
    unsigned int  actualVideoCodec;
    int  deviceRole;
    bool  isAudioEnabled;
    bool  isAudioPausedToStart;
    bool  isDTLSEnabled;
    bool  isDuplexAudioOnly;
    bool  isDuplexVideoOnly;
    bool  isKeyExchangeEnabled;
    bool  isRelayEnabled;
    bool  isRelayForced;
    bool  isVideoEnabled;
    bool  isVideoPausedToStart;
    bool  isVideoSourceScreen;
    unsigned int  preferredAudioCodec;
    unsigned int  preferredVideoCodec;
    bool  requiresWifi;
}

@property unsigned int actualAudioCodec;
@property unsigned int actualVideoCodec;
@property int deviceRole;
@property bool isAudioEnabled;
@property bool isAudioPausedToStart;
@property bool isDTLSEnabled;
@property bool isDuplexAudioOnly;
@property bool isDuplexVideoOnly;
@property bool isKeyExchangeEnabled;
@property bool isRelayEnabled;
@property bool isRelayForced;
@property bool isVideoEnabled;
@property bool isVideoPausedToStart;
@property bool isVideoSourceScreen;
@property unsigned int preferredAudioCodec;
@property unsigned int preferredVideoCodec;
@property bool requiresWifi;

+ (id)AudioOnlyVCCapabilities;
+ (id)DataOnlyVCCapabilities;
+ (id)VideoOnlyVCCapabilities;
+ (id)screenSharingVCCapabilities;

- (unsigned int)actualAudioCodec;
- (unsigned int)actualVideoCodec;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)description;
- (int)deviceRole;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (bool)isAudioEnabled;
- (bool)isAudioPausedToStart;
- (bool)isDTLSEnabled;
- (bool)isDuplexAudioOnly;
- (bool)isDuplexVideoOnly;
- (bool)isKeyExchangeEnabled;
- (bool)isRelayEnabled;
- (bool)isRelayForced;
- (bool)isVideoEnabled;
- (bool)isVideoPausedToStart;
- (bool)isVideoSourceScreen;
- (id)newEncodedDictionary;
- (unsigned int)preferredAudioCodec;
- (unsigned int)preferredVideoCodec;
- (bool)requiresWifi;
- (void)setActualAudioCodec:(unsigned int)arg1;
- (void)setActualVideoCodec:(unsigned int)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setIsAudioEnabled:(bool)arg1;
- (void)setIsAudioPausedToStart:(bool)arg1;
- (void)setIsDTLSEnabled:(bool)arg1;
- (void)setIsDuplexAudioOnly:(bool)arg1;
- (void)setIsDuplexVideoOnly:(bool)arg1;
- (void)setIsKeyExchangeEnabled:(bool)arg1;
- (void)setIsRelayEnabled:(bool)arg1;
- (void)setIsRelayForced:(bool)arg1;
- (void)setIsVideoEnabled:(bool)arg1;
- (void)setIsVideoPausedToStart:(bool)arg1;
- (void)setIsVideoSourceScreen:(bool)arg1;
- (void)setPreferredAudioCodec:(unsigned int)arg1;
- (void)setPreferredVideoCodec:(unsigned int)arg1;
- (void)setRequiresWifi:(bool)arg1;

@end
