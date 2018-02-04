/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *audioSource;
@property (nonatomic) bool clearContext;
@property (nonatomic) int codec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic) bool disableAutoEndpointing;
@property (nonatomic, copy) NSString *dspStatus;
@property (nonatomic) bool enablePartialResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *headsetAddress;
@property (nonatomic, copy) NSString *headsetId;
@property (nonatomic, copy) NSString *headsetName;
@property (nonatomic, copy) NSNumber *isCarryDevice;
@property (nonatomic, copy) NSString *motionActivity;
@property (nonatomic, copy) NSNumber *motionConfidence;
@property (nonatomic, copy) NSNumber *noiseReductionLevel;
@property (nonatomic, copy) NSString *origin;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *voiceTriggerEventInfo;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)startSpeech;
+ (id)startSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioSource;
- (bool)clearContext;
- (int)codec;
- (id)deviceIdentifier;
- (id)deviceModel;
- (bool)disableAutoEndpointing;
- (id)dspStatus;
- (bool)enablePartialResults;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headsetAddress;
- (id)headsetId;
- (id)headsetName;
- (id)isCarryDevice;
- (id)motionActivity;
- (id)motionConfidence;
- (id)noiseReductionLevel;
- (id)origin;
- (bool)requiresResponse;
- (void)setAudioSource:(id)arg1;
- (void)setClearContext:(bool)arg1;
- (void)setCodec:(int)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDisableAutoEndpointing:(bool)arg1;
- (void)setDspStatus:(id)arg1;
- (void)setEnablePartialResults:(bool)arg1;
- (void)setHeadsetAddress:(id)arg1;
- (void)setHeadsetId:(id)arg1;
- (void)setHeadsetName:(id)arg1;
- (void)setIsCarryDevice:(id)arg1;
- (void)setMotionActivity:(id)arg1;
- (void)setMotionConfidence:(id)arg1;
- (void)setNoiseReductionLevel:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (id)voiceTriggerEventInfo;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_isRestartable;

@end
