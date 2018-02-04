/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASACoreAudio : ASAObject {
    unsigned int  _cadPort;
    NSMutableArray * _clients;
    NSObject<OS_dispatch_queue> * _deathQueue;
    NSObject<OS_dispatch_source> * _deathSource;
    NSMutableArray * _plugins;
}

@property (nonatomic, readonly, copy) NSArray *audioDeviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *audioDevices;
@property (nonatomic, readonly, copy) NSArray *boxObjectIDs;
@property (nonatomic, readonly, copy) NSArray *boxes;
@property (nonatomic, readonly, copy) NSArray *clockDeviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *clockDevices;
@property (nonatomic, readonly, copy) NSArray *deviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *pluginObjectIDs;
@property (nonatomic, readonly, copy) NSArray *plugins;

+ (id)coreAudio;
+ (id)sharedCoreAudioObject;

- (void).cxx_destruct;
- (void)_setupDeathSource;
- (void)_teardownDeathSource;
- (void)addClient:(id)arg1;
- (void)addPlugin:(id)arg1;
- (unsigned int)audioDeviceObjectIDWithUID:(id)arg1;
- (id)audioDeviceObjectIDs;
- (id)audioDeviceWithUID:(id)arg1;
- (id)audioDevices;
- (unsigned int)boxObjectIDWithUID:(id)arg1;
- (id)boxObjectIDs;
- (id)boxWithUID:(id)arg1;
- (id)boxes;
- (unsigned int)clockDeviceObjectIDWithUID:(id)arg1;
- (id)clockDeviceObjectIDs;
- (id)clockDeviceWithUID:(id)arg1;
- (id)clockDevices;
- (id)coreAudioClassName;
- (void)dealloc;
- (id)defaultInputAudioDevice;
- (unsigned int)defaultInputAudioDeviceObjectID;
- (id)defaultOutputAudioDevice;
- (unsigned int)defaultOutputAudioDeviceObjectID;
- (id)defaultSystemOutputAudioDevice;
- (unsigned int)defaultSystemOutputAudioDeviceObjectID;
- (id)deviceObjectIDs;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (id)initWithAudioObjectID:(unsigned int)arg1;
- (unsigned int)pluginObjectIDWithBundleID:(id)arg1;
- (id)pluginObjectIDs;
- (id)pluginWithBundleID:(id)arg1;
- (id)plugins;
- (void)removeClient:(id)arg1;
- (void)removePlugin:(id)arg1;
- (unsigned int)transportManagerObjectIDWithBundleID:(id)arg1;
- (id)transportManagerWithBundleID:(id)arg1;

@end