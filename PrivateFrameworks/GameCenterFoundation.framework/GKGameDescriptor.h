/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameDescriptor : GKInternalRepresentation {
    NSNumber * _adamID;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersion;
    NSString * _shortBundleVersion;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, retain) NSNumber *externalVersion;
@property (nonatomic, copy) NSString *shortBundleVersion;

+ (id)gameDescriptorWithBundleID:(id)arg1;
+ (id)gameDescriptorWithBundleID:(id)arg1 adamID:(id)arg2;
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 adamID:(id)arg3;
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4;
+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (id)adamID;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (void)dealloc;
- (id)description;
- (id)dictionaryForRequest;
- (id)externalVersion;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPushDictionary:(id)arg1;
- (void)setAdamID:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setExternalVersion:(id)arg1;
- (void)setShortBundleVersion:(id)arg1;
- (id)shortBundleVersion;

@end
