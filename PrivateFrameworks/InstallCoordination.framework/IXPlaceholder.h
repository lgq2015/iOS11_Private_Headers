/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPlaceholder : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *bundleName;
@property (nonatomic, readonly) bool hasEntitlementsPromise;
@property (nonatomic, readonly) bool hasIconPromise;
@property (nonatomic, readonly) bool hasPlugInPlaceholderPromises;
@property (nonatomic, readonly) unsigned long long installType;
@property (nonatomic, copy) MIStoreMetadata *metadata;
@property (nonatomic, readonly) unsigned long long placeholderType;
@property (nonatomic, retain) IXPlaceholderSeed *seed;

+ (id)_iconDataForBundle:(struct __CFBundle { }*)arg1 error:(id*)arg2;
+ (id)_infoPlistLocalizationDictionaryForBundleURL:(id)arg1 error:(id*)arg2;
+ (id)_placeholderForBundle:(id)arg1 client:(unsigned long long)arg2 withParent:(id)arg3 installType:(unsigned long long)arg4 metadata:(id)arg5 error:(id*)arg6;
+ (id)placeholderForInstallable:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 metadata:(id)arg4 error:(id*)arg5;
+ (id)placeholderForRemovableSystemAppWithBundleID:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (bool)_doInitWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 isPlugin:(bool)arg4;
- (id)bundleID;
- (id)bundleName;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementsPromiseWithError:(id*)arg1;
- (bool)hasEntitlementsPromise;
- (bool)hasIconPromise;
- (bool)hasPlugInPlaceholderPromises;
- (id)iconPromiseWithError:(id*)arg1;
- (id)infoPlistLocalizationsWithError:(id*)arg1;
- (id)initAppPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 client:(unsigned long long)arg4;
- (id)initPlugInPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 parentPlaceholder:(id)arg3 client:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (unsigned long long)installType;
- (bool)launchProhibited:(bool*)arg1 error:(id*)arg2;
- (id)metadata;
- (id)metadataWithError:(id*)arg1;
- (id)placeholderAttributesWithError:(id*)arg1;
- (unsigned long long)placeholderType;
- (id)plugInPlaceholderPromisesWithError:(id*)arg1;
- (Class)seedClass;
- (void)setBundleID:(id)arg1;
- (void)setBundleName:(id)arg1;
- (bool)setConfigurationCompleteWithError:(id*)arg1;
- (bool)setEntitlementsPromise:(id)arg1 error:(id*)arg2;
- (bool)setIconPromise:(id)arg1 error:(id*)arg2;
- (bool)setInfoPlistLocalizations:(id)arg1 error:(id*)arg2;
- (bool)setLaunchProhibited:(bool)arg1 error:(id*)arg2;
- (void)setMetadata:(id)arg1;
- (bool)setMetadata:(id)arg1 error:(id*)arg2;
- (bool)setPlaceholderAttributes:(id)arg1 error:(id*)arg2;
- (bool)setPlugInPlaceholderPromises:(id)arg1 error:(id*)arg2;
- (bool)setSinfData:(id)arg1 error:(id*)arg2;
- (id)sinfDataWithError:(id*)arg1;

@end
