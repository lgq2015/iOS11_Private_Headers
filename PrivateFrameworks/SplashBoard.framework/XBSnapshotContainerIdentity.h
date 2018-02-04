/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBSnapshotContainerIdentity : NSObject <NSCopying> {
    NSString * _bundleContainerPath;
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    NSString * _dataContainerPath;
    NSString * _snapshotContainerPath;
}

@property (nonatomic, readonly, copy) NSString *bundleContainerPath;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundlePath;
@property (nonatomic, readonly, copy) NSString *dataContainerPath;
@property (nonatomic, readonly, copy) NSString *snapshotContainerPath;

+ (id)identityForApplicationInfo:(id)arg1;
+ (id)identityForBundleProxy:(id)arg1;
+ (id)identityForCompatibilityInfo:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithBundleIdentifier:(id)arg1 bundlePath:(id)arg2 dataContainerPath:(id)arg3 bundleContainerPath:(id)arg4;
- (id)bundleContainerPath;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataContainerPath;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)snapshotContainerPath;
- (id)snapshotContainerPathForGroupID:(id)arg1;
- (id)snapshotContainerPathForSnapshot:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
