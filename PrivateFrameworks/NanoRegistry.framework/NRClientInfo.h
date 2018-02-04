/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRClientInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _entitlements;
    unsigned long long  _lastIndexCheckin;
    NSString * _processName;
}

@property (nonatomic, retain) NSArray *entitlements;
@property (nonatomic) unsigned long long lastIndexCheckin;
@property (nonatomic, retain) NSString *processName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlements;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lastIndexCheckin;
- (id)processName;
- (void)setEntitlements:(id)arg1;
- (void)setLastIndexCheckin:(unsigned long long)arg1;
- (void)setProcessName:(id)arg1;

@end
