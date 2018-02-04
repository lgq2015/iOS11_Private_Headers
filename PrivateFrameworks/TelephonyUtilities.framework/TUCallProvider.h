/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallProvider : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _audioSessionID;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSArray * _emergencyLabeledHandles;
    NSArray * _handoffIdentifiers;
    NSData * _iconTemplateImageData;
    NSString * _identifier;
    NSString * _localizedName;
    unsigned long long  _maximumCallGroups;
    unsigned long long  _maximumCallsPerCallGroup;
    NSURL * _originalRingtoneSoundURL;
    TUSandboxExtendedURL * _sandboxExtendedRingtoneSoundURL;
    NSSet * _supportedHandleTypes;
    bool  _supportsAudioAndVideo;
    bool  _supportsAudioOnly;
    bool  _supportsCurrentPlatform;
    bool  _supportsEmergency;
    bool  _supportsRecents;
    bool  _supportsVoicemail;
}

@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSURL *bundleURL;
@property (nonatomic, copy) NSArray *emergencyLabeledHandles;
@property (getter=isFaceTimeProvider, nonatomic, readonly) bool faceTimeProvider;
@property (nonatomic, copy) NSArray *handoffIdentifiers;
@property (nonatomic, copy) NSData *iconTemplateImageData;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic) unsigned long long maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup;
@property (nonatomic, retain) NSURL *originalRingtoneSoundURL;
@property (nonatomic, retain) NSURL *ringtoneSoundURL;
@property (nonatomic, retain) TUSandboxExtendedURL *sandboxExtendedRingtoneSoundURL;
@property (nonatomic, copy) NSSet *supportedHandleTypes;
@property (nonatomic) bool supportsAudioAndVideo;
@property (nonatomic) bool supportsAudioOnly;
@property (nonatomic) bool supportsCurrentPlatform;
@property (nonatomic) bool supportsEmergency;
@property (nonatomic) bool supportsRecents;
@property (nonatomic) bool supportsVoicemail;
@property (getter=isTelephonyProvider, nonatomic, readonly) bool telephonyProvider;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)audioSessionID;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayAppBundleIdentifier;
- (id)emergencyLabeledHandles;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffIdentifiers;
- (bool)hasRestrictionsInRetailEnvironment;
- (unsigned long long)hash;
- (id)iconTemplateImageData;
- (id)identifier;
- (id)inCallUIBundleIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCallProvider:(id)arg1;
- (bool)isFaceTimeProvider;
- (bool)isSystemProvider;
- (bool)isTelephonyProvider;
- (id)localizedName;
- (unsigned long long)maximumCallGroups;
- (unsigned long long)maximumCallsPerCallGroup;
- (id)originalRingtoneSoundURL;
- (bool)prefersShowingInCallUI;
- (id)ringtoneSoundURL;
- (id)sandboxExtendedRingtoneSoundURL;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setEmergencyLabeledHandles:(id)arg1;
- (void)setHandoffIdentifiers:(id)arg1;
- (void)setIconTemplateImageData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setMaximumCallGroups:(unsigned long long)arg1;
- (void)setMaximumCallsPerCallGroup:(unsigned long long)arg1;
- (void)setOriginalRingtoneSoundURL:(id)arg1;
- (void)setRingtoneSoundURL:(id)arg1;
- (void)setSandboxExtendedRingtoneSoundURL:(id)arg1;
- (void)setSupportedHandleTypes:(id)arg1;
- (void)setSupportsAudioAndVideo:(bool)arg1;
- (void)setSupportsAudioOnly:(bool)arg1;
- (void)setSupportsCurrentPlatform:(bool)arg1;
- (void)setSupportsEmergency:(bool)arg1;
- (void)setSupportsRecents:(bool)arg1;
- (void)setSupportsVoicemail:(bool)arg1;
- (id)supportedHandleTypes;
- (bool)supportsAudioAndVideo;
- (bool)supportsAudioOnly;
- (bool)supportsCurrentPlatform;
- (bool)supportsEmergency;
- (bool)supportsHandleType:(long long)arg1;
- (bool)supportsRecents;
- (bool)supportsShowingInCallUI;
- (bool)supportsVoicemail;

@end
