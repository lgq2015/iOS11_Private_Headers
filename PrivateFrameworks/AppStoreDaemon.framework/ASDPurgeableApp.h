/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _purgeableReason;
    long long  _staticDiskUsage;
    NSNumber * _storeItemID;
    bool  _systemApp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, copy) NSString *purgeableReason;
@property (nonatomic) long long staticDiskUsage;
@property (nonatomic, copy) NSNumber *storeItemID;
@property (getter=isSystemApp, nonatomic) bool systemApp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSystemApp;
- (id)purgeableReason;
- (void)setBundleID:(id)arg1;
- (void)setPurgeableReason:(id)arg1;
- (void)setStaticDiskUsage:(long long)arg1;
- (void)setStoreItemID:(id)arg1;
- (void)setSystemApp:(bool)arg1;
- (long long)staticDiskUsage;
- (id)storeItemID;

@end
