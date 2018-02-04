/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding> {
    double  _modificationDate;
    NSUUID * _objectID;
    NSUUID * _sourceID;
    long long  _status;
}

@property (nonatomic) double modificationDate;
@property (nonatomic, copy) NSUUID *objectID;
@property (nonatomic, copy) NSUUID *sourceID;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)modificationDate;
- (id)objectID;
- (void)setModificationDate:(double)arg1;
- (void)setObjectID:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)sourceID;
- (long long)status;

@end
