/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    long long  _capabilities;
    NSString * _localizedDisplayName;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic) long long capabilities;
@property (nonatomic, readonly) NSString *localizedDisplayName;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (id)capabilitiesToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (long long)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)arg1 localizedDisplayName:(id)arg2 capabilities:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (void)setCapabilities:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments

- (bool)supportsMediaRemote;

@end
