/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDBox : ASDObject {
    bool  _acquirable;
    NSObject<OS_dispatch_queue> * _acquireQueue;
    bool  _acquired;
    int  _acquisitionFailure;
    NSString * _boxName;
    NSString * _boxUID;
    bool  _canChangeBoxName;
    bool  _canSetIdentify;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    NSMutableArray * _devices;
    NSString * _firmwareVersion;
    bool  _hasAudio;
    bool  _hasMIDI;
    bool  _hasVideo;
    bool  _identify;
    NSString * _manufacturerName;
    NSString * _modelName;
    NSString * _modelUID;
    bool  _requiresAuthentication;
    NSString * _serialNumber;
    bool  _supportsIdentify;
}

@property (getter=isAcquirable, nonatomic) bool acquirable;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *acquireQueue;
@property (getter=isAcquireable, nonatomic) bool acquireable;
@property (nonatomic) bool acquired;
@property (nonatomic) int acquisitionFailure;
@property (nonatomic, readonly, retain) NSArray *audioDevices;
@property (nonatomic, copy) NSString *boxName;
@property (nonatomic, readonly, copy) NSString *boxUID;
@property (nonatomic) bool canChangeBoxName;
@property (nonatomic) bool canSetIdentify;
@property (nonatomic, readonly, retain) NSArray *devices;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (nonatomic) bool hasAudio;
@property (nonatomic) bool hasMIDI;
@property (nonatomic) bool hasVideo;
@property (nonatomic) bool identify;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *modelUID;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) bool supportsIdentify;
@property (nonatomic, readonly) unsigned int transportType;

+ (id)keyPathsForValuesAffectingAcquireable;

- (void).cxx_destruct;
- (bool)acquireBox:(bool)arg1 fromHAL:(bool)arg2;
- (id)acquireQueue;
- (bool)acquired;
- (int)acquisitionFailure;
- (void)addAudioDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)addDevicesToPlugin;
- (id)audioDevices;
- (id)boxName;
- (id)boxUID;
- (bool)canChangeBoxName;
- (bool)canSetIdentify;
- (bool)changeBoxName:(id)arg1;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (id)devices;
- (id)firmwareVersion;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasAudio;
- (bool)hasMIDI;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)hasVideo;
- (bool)identify;
- (void)identifyBox:(bool)arg1;
- (id)initWithBoxUID:(id)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;
- (bool)isAcquirable;
- (bool)isAcquireable;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)manufacturerName;
- (id)modelName;
- (id)modelUID;
- (unsigned int)objectClass;
- (void)removeAllAudioDevices;
- (void)removeAllDevices;
- (void)removeAudioDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)removeDevicesFromPlugin;
- (bool)requiresAuthentication;
- (id)serialNumber;
- (void)setAcquirable:(bool)arg1;
- (void)setAcquireable:(bool)arg1;
- (void)setAcquired:(bool)arg1;
- (void)setAcquisitionFailure:(int)arg1;
- (void)setBoxName:(id)arg1;
- (void)setCanChangeBoxName:(bool)arg1;
- (void)setCanSetIdentify:(bool)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setHasAudio:(bool)arg1;
- (void)setHasMIDI:(bool)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setIdentify:(bool)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelUID:(id)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSupportsIdentify:(bool)arg1;
- (bool)supportsIdentify;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
- (unsigned int)transportType;

@end
