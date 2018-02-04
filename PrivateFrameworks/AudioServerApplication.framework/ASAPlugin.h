/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASAPlugin : ASAObject

@property (nonatomic, readonly, copy) NSArray *audioDeviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *audioDevices;
@property (nonatomic, readonly, copy) NSArray *boxObjectIDs;
@property (nonatomic, readonly, copy) NSArray *boxes;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSArray *clockDeviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *clockDevices;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSURL *resourceBundleURL;

+ (id)pluginWithBundleIdentifier:(id)arg1;

- (unsigned int)audioDeviceObjectIDWithUID:(id)arg1;
- (id)audioDeviceObjectIDs;
- (id)audioDeviceWithUID:(id)arg1;
- (id)audioDevices;
- (unsigned int)boxObjectIDWithUID:(id)arg1;
- (id)boxObjectIDs;
- (id)boxWithUID:(id)arg1;
- (id)boxes;
- (id)bundleID;
- (unsigned int)clockDeviceObjectIDWithUID:(id)arg1;
- (id)clockDeviceObjectIDs;
- (id)clockDeviceWithUID:(id)arg1;
- (id)clockDevices;
- (id)coreAudioClassName;
- (id)deviceObjectIDs;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)manufacturer;
- (id)resourceBundleURL;

@end
