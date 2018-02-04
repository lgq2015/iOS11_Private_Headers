/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVendorModelEntry : HMFObject {
    NSString * _appBundleID;
    NSString * _appStoreID;
    HMDAccessoryVersion * _firmwareVersion;
    NSString * _manufacturer;
    NSString * _modelName;
}

@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) NSString *appStoreID;
@property (nonatomic, readonly) HMDAccessoryVersion *firmwareVersion;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelName;

- (void).cxx_destruct;
- (id)appBundleID;
- (id)appStoreID;
- (id)description;
- (id)firmwareVersion;
- (id)initWithModelName:(id)arg1 manufacturer:(id)arg2 appBundleID:(id)arg3 appStoreID:(id)arg4 firmwareVersion:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (id)modelName;

@end
