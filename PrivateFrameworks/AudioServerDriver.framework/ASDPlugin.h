/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDPlugin : ASDObject <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    NSObject<OS_dispatch_queue> * _audioDeviceQueue;
    NSMutableDictionary * _audioDevices;
    NSObject<OS_dispatch_queue> * _boxQueue;
    NSMutableDictionary * _boxes;
    NSString * _bundleID;
    NSObject<OS_dispatch_queue> * _clockDeviceQueue;
    NSMutableDictionary * _clockDevices;
    struct AudioServerPlugInDriverInterface {} ** _driverRef;
    struct AudioServerPlugInDriverInterface { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); } * _interfacePtr;
    unsigned int  _nextObjectID;
    NSObject<OS_dispatch_queue> * _objectQueue;
    NSMapTable * _objects;
    struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } * _pluginHost;
    unsigned int  _pluginRefCount;
    unsigned int  _powerConnection;
    struct IONotificationPort { } * _powerNotificationPort;
    NSObject<OS_dispatch_queue> * _powerNotificcationQueue;
    unsigned int  _powerNotifier;
    unsigned int  _transportType;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct AudioServerPlugInDriverInterface {}**driverRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transportType;

- (void).cxx_destruct;
- (void)_handlePowerNotificationWithMessageType:(unsigned int)arg1 andArgument:(long long)arg2;
- (void)addAudioDevice:(id)arg1;
- (void)addAudioDevices:(id)arg1;
- (void)addBox:(id)arg1;
- (void)addCAObject:(id)arg1;
- (void)addClockDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)addDevices:(id)arg1;
- (unsigned int)addRef;
- (id)arrayForKey:(id)arg1;
- (id)audioDevices;
- (id)boxes;
- (id)bundleID;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 forObject:(id)arg2;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 forObjectID:(unsigned int)arg2;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (void)dealloc;
- (bool)deregisterForSystemSleepNotifications;
- (id)devices;
- (id)dictionaryForKey:(id)arg1;
- (struct AudioServerPlugInDriverInterface {}**)driverRef;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (void)halInitializeWithPluginHost:(struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg1;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)init;
- (unsigned int)objectClass;
- (id)objectForObjectID:(unsigned int)arg1;
- (unsigned int)objectIDForBoxUID:(id)arg1;
- (unsigned int)objectIDForClockDeviceUID:(id)arg1;
- (unsigned int)objectIDForDeviceUID:(id)arg1;
- (id)plugin;
- (bool)registerForSystemSleepNotifications;
- (void)removeAudioDevice:(id)arg1;
- (void)removeAudioDevices:(id)arg1;
- (void)removeBox:(id)arg1;
- (void)removeCAObject:(id)arg1;
- (void)removeClockDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)removeDevices:(id)arg1;
- (unsigned int)removeRef;
- (bool)requestConfigurationChangeForDevice:(id)arg1 withBlock:(id /* block */)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setTransportType:(unsigned int)arg1;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
- (unsigned int)transportType;

@end
