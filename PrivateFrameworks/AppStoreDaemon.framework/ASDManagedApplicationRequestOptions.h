/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDManagedApplicationRequestOptions : ASDRequestOptions {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersionIdentifier;
    NSNumber * _itemIdentifier;
    bool  _skipDownloads;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) NSNumber *itemIdentifier;
@property (nonatomic, readonly) bool skipDownloads;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(bool)arg5;
- (id)itemIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (bool)skipDownloads;

@end
