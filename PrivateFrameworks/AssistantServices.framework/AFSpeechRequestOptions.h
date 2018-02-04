/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {
    bool  _acousticIdEnabled;
    NSString * _activationDeviceIdentifier;
    long long  _activationEvent;
    unsigned long long  _activationEventMachAbsoluteTime;
    double  _activationEventTime;
    NSFileHandle * _audioFileHandle;
    long long  _audioFileType;
    NSURL * _audioFileURL;
    unsigned long long  _bargeInOptions;
    double  _expectedActivationEventTime;
    unsigned long long  _homeButtonDownEventMachAbsoluteTime;
    double  _homeButtonDownEventTime;
    NSNumber * _homeButtonUpFromBeep;
    bool  _isEyesFree;
    bool  _isInitialBringUp;
    NSNumber * _notifyState;
    bool  _pendCallbacksUntilAfterContinuation;
    NSString * _recordDeviceIdentifier;
    bool  _releaseAudioSessionOnRecordingCompletion;
    NSString * _serverCommandId;
    NSXPCListenerEndpoint * _speechRecordingEventListeningEndpoint;
    bool  _suppressStopAlert;
    bool  _useAutomaticEndpointing;
    bool  _useBorealisBuffer;
    bool  _usePrelisteningMode;
    bool  _useStreamingDictation;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (nonatomic) bool acousticIdEnabled;
@property (nonatomic, copy) NSString *activationDeviceIdentifier;
@property (nonatomic) long long activationEvent;
@property (nonatomic) unsigned long long activationEventMachAbsoluteTime;
@property (nonatomic) double activationEventTime;
@property (nonatomic, retain) NSFileHandle *audioFileHandle;
@property (nonatomic) long long audioFileType;
@property (nonatomic, copy) NSURL *audioFileURL;
@property (nonatomic) unsigned long long bargeInOptions;
@property (nonatomic, copy) NSString *btDeviceAddress;
@property (nonatomic) double expectedActivationEventTime;
@property (nonatomic) unsigned long long homeButtonDownEventMachAbsoluteTime;
@property (nonatomic) double homeButtonDownEventTime;
@property (nonatomic, copy) NSNumber *homeButtonUpFromBeep;
@property (nonatomic) bool isEyesFree;
@property (nonatomic) bool isInitialBringUp;
@property (nonatomic, copy) NSNumber *notifyState;
@property (nonatomic) bool pendCallbacksUntilAfterContinuation;
@property (nonatomic, copy) NSString *recordDeviceIdentifier;
@property (nonatomic) bool releaseAudioSessionOnRecordingCompletion;
@property (nonatomic, copy) NSString *serverCommandId;
@property (nonatomic, retain) NSXPCListenerEndpoint *speechRecordingEventListeningEndpoint;
@property (nonatomic) bool suppressStopAlert;
@property (nonatomic) bool useAutomaticEndpointing;
@property (nonatomic) bool useBorealisBuffer;
@property (nonatomic) bool usePrelisteningMode;
@property (nonatomic) bool useStreamingDictation;
@property (nonatomic, copy) NSDictionary *voiceTriggerEventInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acousticIdEnabled;
- (id)activationDeviceIdentifier;
- (long long)activationEvent;
- (unsigned long long)activationEventMachAbsoluteTime;
- (double)activationEventTime;
- (id)audioFileHandle;
- (long long)audioFileType;
- (id)audioFileURL;
- (unsigned long long)bargeInOptions;
- (id)btDeviceAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)expectedActivationEventTime;
- (unsigned long long)homeButtonDownEventMachAbsoluteTime;
- (double)homeButtonDownEventTime;
- (id)homeButtonUpFromBeep;
- (id)initWithActivationEvent:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEyesFree;
- (bool)isInitialBringUp;
- (id)notifyState;
- (bool)pendCallbacksUntilAfterContinuation;
- (id)recordDeviceIdentifier;
- (bool)releaseAudioSessionOnRecordingCompletion;
- (id)serverCommandId;
- (void)setAcousticIdEnabled:(bool)arg1;
- (void)setActivationDeviceIdentifier:(id)arg1;
- (void)setActivationEvent:(long long)arg1;
- (void)setActivationEventMachAbsoluteTime:(unsigned long long)arg1;
- (void)setActivationEventTime:(double)arg1;
- (void)setAudioFileHandle:(id)arg1;
- (void)setAudioFileType:(long long)arg1;
- (void)setAudioFileURL:(id)arg1;
- (void)setBargeInOptions:(unsigned long long)arg1;
- (void)setBtDeviceAddress:(id)arg1;
- (void)setExpectedActivationEventTime:(double)arg1;
- (void)setHomeButtonDownEventMachAbsoluteTime:(unsigned long long)arg1;
- (void)setHomeButtonDownEventTime:(double)arg1;
- (void)setHomeButtonUpFromBeep:(id)arg1;
- (void)setIsEyesFree:(bool)arg1;
- (void)setIsInitialBringUp:(bool)arg1;
- (void)setNotifyState:(id)arg1;
- (void)setPendCallbacksUntilAfterContinuation:(bool)arg1;
- (void)setRecordDeviceIdentifier:(id)arg1;
- (void)setReleaseAudioSessionOnRecordingCompletion:(bool)arg1;
- (void)setServerCommandId:(id)arg1;
- (void)setSpeechRecordingEventListeningEndpoint:(id)arg1;
- (void)setSuppressStopAlert:(bool)arg1;
- (void)setUseAutomaticEndpointing:(bool)arg1;
- (void)setUseBorealisBuffer:(bool)arg1;
- (void)setUsePrelisteningMode:(bool)arg1;
- (void)setUseStreamingDictation:(bool)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (id)speechRecordingEventListeningEndpoint;
- (bool)suppressStopAlert;
- (bool)useAutomaticEndpointing;
- (bool)useBorealisBuffer;
- (bool)usePrelisteningMode;
- (bool)useStreamingDictation;
- (id)voiceTriggerEventInfo;

@end
