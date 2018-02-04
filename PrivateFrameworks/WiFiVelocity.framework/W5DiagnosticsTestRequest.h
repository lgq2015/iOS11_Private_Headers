/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5DiagnosticsTestRequest : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _configuration;
    long long  _testID;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic) long long testID;
@property (nonatomic, copy) NSUUID *uuid;

+ (id)requestWithTestID:(long long)arg1 configuration:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)configuration;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDiagnosticsTestRequest:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setTestID:(long long)arg1;
- (void)setUuid:(id)arg1;
- (long long)testID;
- (id)uuid;

@end
