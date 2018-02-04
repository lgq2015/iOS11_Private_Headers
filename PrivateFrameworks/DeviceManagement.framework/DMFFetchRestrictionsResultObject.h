/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchRestrictionsResultObject : CATTaskResultObject {
    NSDictionary * _globalRestrictions;
    NSDictionary * _profileRestrictions;
    NSDictionary * _restrictions;
}

@property (nonatomic, readonly, copy) NSDictionary *globalRestrictions;
@property (nonatomic, readonly, copy) NSDictionary *profileRestrictions;
@property (nonatomic, readonly, copy) NSDictionary *restrictions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)globalRestrictions;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestrictions:(id)arg1;
- (id)profileRestrictions;
- (id)restrictions;

@end
