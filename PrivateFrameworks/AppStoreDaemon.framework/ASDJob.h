/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJob : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSNumber * _externalOrderKey;
    NSError * _failureError;
    NSNumber * _orderKey;
    double  _percentComplete;
    long long  _persistentID;
    long long  _phase;
    long long  _purchaseID;
    long long  _storeItemID;
    long long  _type;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSNumber *externalOrderKey;
@property (nonatomic, copy) NSError *failureError;
@property (nonatomic, copy) NSNumber *orderKey;
@property (nonatomic) double percentComplete;
@property (nonatomic) long long persistentID;
@property (nonatomic) long long phase;
@property (nonatomic) long long purchaseID;
@property (nonatomic) long long storeItemID;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalOrderKey;
- (id)failureError;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)orderKey;
- (double)percentComplete;
- (long long)persistentID;
- (long long)phase;
- (long long)purchaseID;
- (void)setBundleID:(id)arg1;
- (void)setExternalOrderKey:(id)arg1;
- (void)setFailureError:(id)arg1;
- (void)setOrderKey:(id)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPhase:(long long)arg1;
- (void)setPurchaseID:(long long)arg1;
- (void)setStoreItemID:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)storeItemID;
- (long long)type;

@end
