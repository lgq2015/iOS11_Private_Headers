/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSArray * _samplesRequiringAuthorization;
    NSUUID * _sessionIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *samplesRequiringAuthorization;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initForBundleIdentifier:(id)arg1 samples:(id)arg2 sessionIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)samplesRequiringAuthorization;
- (id)sessionIdentifier;

@end
