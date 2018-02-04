/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASABox : ASAObject

@property (getter=isAcquireSettable, nonatomic, readonly) bool acquireSettable;
@property (getter=isAcquired, nonatomic) bool acquired;
@property (nonatomic, readonly) int acquisitionFailure;
@property (nonatomic, readonly, copy) NSArray *audioDeviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *audioDevices;
@property (nonatomic, readonly, copy) NSString *boxUID;
@property (nonatomic, readonly, copy) NSArray *clockDeviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *clockDevices;
@property (nonatomic, readonly, copy) NSArray *deviceObjectIDs;
@property (nonatomic, readonly, copy) NSString *firmwareVersion;
@property (nonatomic, readonly) bool hasAudio;
@property (nonatomic, readonly) bool hasMIDI;
@property (nonatomic, readonly) bool hasVideo;
@property (nonatomic) bool identify;
@property (getter=isIdentifySettable, nonatomic, readonly) bool identifySettable;
@property (nonatomic, readonly) bool isProtected;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *modelName;
@property (nonatomic, readonly, copy) NSString *modelUID;
@property (nonatomic, copy) NSString *name;
@property (getter=isNameSettable, nonatomic, readonly) bool nameSettable;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly) unsigned int transportType;

- (int)acquisitionFailure;
- (id)audioDeviceObjectIDs;
- (id)audioDevices;
- (id)boxUID;
- (id)clockDeviceObjectIDs;
- (id)clockDevices;
- (id)coreAudioClassName;
- (id)deviceObjectIDs;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (id)firmwareVersion;
- (bool)hasAudio;
- (bool)hasMIDI;
- (bool)hasVideo;
- (bool)identify;
- (bool)isAcquireSettable;
- (bool)isAcquired;
- (bool)isIdentifySettable;
- (bool)isNameSettable;
- (bool)isProtected;
- (id)manufacturer;
- (id)modelName;
- (id)modelUID;
- (id)name;
- (id)serialNumber;
- (void)setAcquired:(bool)arg1;
- (void)setIdentify:(bool)arg1;
- (void)setName:(id)arg1;
- (unsigned int)transportType;

@end
