/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTWatchKitAppDefinition : NSObject {
    NSString * _containerBundleID;
    bool  _isInstalled;
    bool  _runsOnWatch;
    NSString * _watchKitAppBundleID;
}

@property (nonatomic, readonly) NSString *containerBundleID;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool runsOnWatch;
@property (nonatomic, readonly) NSString *watchKitAppBundleID;

- (void).cxx_destruct;
- (id)containerBundleID;
- (id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(bool)arg3 runsOnWatch:(bool)arg4;
- (bool)isInstalled;
- (bool)runsOnWatch;
- (id)watchKitAppBundleID;

@end
