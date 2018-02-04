/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _productType;
    int  _protocolVersion;
    NSString * _sourceBundleIdentifier;
    unsigned long long  _state;
    NSString * _systemBuildVersion;
}

@property (getter=isActive, readonly) bool active;
@property (readonly, copy) NSString *productType;
@property (readonly) int protocolVersion;
@property (getter=isRestoreComplete, readonly) bool restoreComplete;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly, copy) NSString *systemBuildVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 productType:(id)arg3 active:(bool)arg4 restoreComplete:(bool)arg5 protocolVersion:(int)arg6;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isRestoreComplete;
- (id)productType;
- (int)protocolVersion;
- (id)sourceBundleIdentifier;
- (id)systemBuildVersion;

@end
