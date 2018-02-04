/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions> {
    <TUAudioDeviceControllerActions> * _actionsDelegate;
    AVAudioClient * _audioClient;
    NSHashTable * _delegates;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) <TUAudioDeviceControllerActions> *actionsDelegate;
@property (nonatomic, retain) AVAudioClient *audioClient;
@property (nonatomic, retain) AVAudioDevice *currentInputDevice;
@property (nonatomic, retain) AVAudioDevice *currentOutputDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputDevices;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionsDelegate;
- (void)addDelegate:(id)arg1;
- (id)audioClient;
- (void)choosePreferredDeviceIfNecessary;
- (id)currentInputDevice;
- (id)currentOutputDevice;
- (id)debugDescription;
- (id)delegates;
- (id)devices;
- (id)init;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;
- (id)inputDevices;
- (id)outputDevices;
- (void)removeDelegate:(id)arg1;
- (id)serialQueue;
- (void)setActionsDelegate:(id)arg1;
- (void)setAudioClient:(id)arg1;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;
- (void)setCurrentInputDevice:(id)arg1;
- (void)setCurrentOutputDevice:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
