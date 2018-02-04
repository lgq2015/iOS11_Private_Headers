/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYActivityInfo : NSObject <NSSecureCoding> {
    NSString * _backboardPrelaunchBundleIdentifier;
    NSString * _label;
    NSString * _machServiceName;
    NSString * _priority;
    NSArray * _sessionTypes;
    NSNumber * _timeoutSeconds;
}

@property (nonatomic, copy) NSString *backboardPrelaunchBundleIdentifier;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *machServiceName;
@property (nonatomic, copy) NSString *priority;
@property (nonatomic, copy) NSArray *sessionTypes;
@property (nonatomic, copy) NSNumber *timeoutSeconds;

+ (id)activityWithPlist:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backboardPrelaunchBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)machServiceName;
- (id)priority;
- (id)sessionTypes;
- (void)setBackboardPrelaunchBundleIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setSessionTypes:(id)arg1;
- (void)setTimeoutSeconds:(id)arg1;
- (id)timeoutSeconds;

@end
