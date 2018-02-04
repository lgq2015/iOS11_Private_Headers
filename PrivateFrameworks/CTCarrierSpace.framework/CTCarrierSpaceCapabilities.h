/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceCapabilities : NSObject <NSCopying, NSSecureCoding> {
    bool  _supportsApplications;
    bool  _supportsPlans;
    bool  _supportsServices;
    bool  _supportsUsage;
}

@property (nonatomic) bool supportsApplications;
@property (nonatomic) bool supportsPlans;
@property (nonatomic) bool supportsServices;
@property (nonatomic) bool supportsUsage;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSupportsApplications:(bool)arg1;
- (void)setSupportsPlans:(bool)arg1;
- (void)setSupportsServices:(bool)arg1;
- (void)setSupportsUsage:(bool)arg1;
- (bool)supportsApplications;
- (bool)supportsPlans;
- (bool)supportsServices;
- (bool)supportsUsage;

@end
