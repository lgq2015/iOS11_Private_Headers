/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStorageApp : NSObject {
    LSApplicationProxy * _appProxy;
    long long  _demoteSize;
    long long  _externalDataSize;
    bool  _isDeleting;
    bool  _isDemoting;
    bool  _isDocumentApp;
    bool  _isInternalApp;
    bool  _isPseudoApp;
    bool  _isSystemApp;
    bool  _isUsageApp;
    bool  _isUserApp;
    NSArray * _mediaTypes;
    bool  _purgeableCalculated;
    long long  _purgeableSize;
    bool  _specialCalculated;
    long long  _specialSize;
    PSUsageBundleApp * _usageBundleApp;
}

@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, retain) LSApplicationProxy *appProxy;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) long long dataSize;
@property (nonatomic, readonly) long long demoteSize;
@property (nonatomic, readonly) NSArray *documents;
@property (nonatomic, readonly) long long dynamicSize;
@property long long externalDataSize;
@property (nonatomic, readonly) NSDate *installDate;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isDeleted;
@property (nonatomic, readonly) bool isDemotable;
@property (nonatomic, readonly) bool isDemoted;
@property (nonatomic, readonly) bool isDocumentApp;
@property (nonatomic, readonly) bool isInternalApp;
@property bool isPseudoApp;
@property (nonatomic, readonly) bool isSystemApp;
@property (nonatomic) bool isUsageApp;
@property (nonatomic) bool isUserApp;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic, retain) NSArray *mediaTypes;
@property (nonatomic, readonly) NSString *name;
@property bool purgeableCalculated;
@property (nonatomic, readonly) long long purgeableSize;
@property bool specialCalculated;
@property (nonatomic, readonly) long long specialSize;
@property (nonatomic, readonly) long long staticSize;
@property (nonatomic, readonly) long long totalSize;
@property (retain) PSUsageBundleApp *usageBundleApp;
@property (nonatomic, readonly) NSString *vendorName;
@property (nonatomic, readonly) NSString *versionString;

+ (void)setLaunchDatesNeedUpdating;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)appProxy;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (long long)dataSize;
- (long long)demoteSize;
- (id)documents;
- (long long)dynamicSize;
- (long long)externalDataSize;
- (id)initWithApplicationProxy:(id)arg1;
- (id)installDate;
- (bool)isDeletable;
- (bool)isDeleted;
- (bool)isDemotable;
- (bool)isDemoted;
- (bool)isDocumentApp;
- (bool)isInternalApp;
- (bool)isPseudoApp;
- (bool)isSystemApp;
- (bool)isUsageApp;
- (bool)isUserApp;
- (id)lastUsedDate;
- (id)mediaTypes;
- (id)name;
- (bool)purgeableCalculated;
- (long long)purgeableSize;
- (void)reloadProxy;
- (void)setAppProxy:(id)arg1;
- (void)setExternalDataSize:(long long)arg1;
- (void)setIsPseudoApp:(bool)arg1;
- (void)setIsUsageApp:(bool)arg1;
- (void)setIsUserApp:(bool)arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setNeedsPurgeableSizeUpdate;
- (void)setNeedsSpecialSizeUpdate;
- (void)setPurgeableCalculated:(bool)arg1;
- (void)setSpecialCalculated:(bool)arg1;
- (void)setUsageBundleApp:(id)arg1;
- (bool)specialCalculated;
- (long long)specialSize;
- (long long)specialStorageUsageForBundleID:(id)arg1;
- (long long)staticSize;
- (long long)totalSize;
- (id)usageBundleApp;
- (bool)valueForBooleanInfoKey:(id)arg1;
- (id)vendorName;
- (id)versionString;

@end
