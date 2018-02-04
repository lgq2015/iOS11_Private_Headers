/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSError * _error;
    NSNumber * _persistentID;
    long long  _status;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSNumber *persistentID;
@property (nonatomic) long long status;

+ (id)_resultWithPersistentID:(long long)arg1 bundleID:(id)arg2 status:(long long)arg3 error:(id)arg4;
+ (id)resultWithExistingActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithInvalidActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithRestrictedActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithValidActivity:(long long)arg1 bundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)persistentID;
- (void)setBundleID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
