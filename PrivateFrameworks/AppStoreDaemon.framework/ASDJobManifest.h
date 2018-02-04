/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobManifest : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _activities;
    long long  _manifestType;
    NSNumber * _purchaseID;
    NSString * _storeCorrelationID;
}

@property (nonatomic, readonly) long long manifestType;
@property (nonatomic, copy) NSNumber *purchaseID;
@property (nonatomic, copy) NSString *storeCorrelationID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addActivity:(id)arg1 withIdentifier:(id)arg2 persistentID:(id)arg3;
- (id)_generateIdentifier;
- (id)addActivity:(id)arg1;
- (void)addActivity:(id)arg1 withIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateActivitiesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifestType:(long long)arg1;
- (long long)manifestType;
- (id)purchaseID;
- (void)setPurchaseID:(id)arg1;
- (void)setStoreCorrelationID:(id)arg1;
- (id)storeCorrelationID;

@end
