/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingsMetadata : HMFObject <HMFObject> {
    HMDAccessorySettingGroupMetadata * _rootGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) HMDAccessorySettingGroupMetadata *rootGroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)propertyDescription;
- (id)rootGroup;

@end
