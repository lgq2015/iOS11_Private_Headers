/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchControlGroupIdentifiersRequest : CATTaskRequest {
    bool  _includeTemporary;
    NSString * _leaderIdentifier;
}

@property (nonatomic) bool includeTemporary;
@property (nonatomic, copy) NSString *leaderIdentifier;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeTemporary;
- (id)initWithCoder:(id)arg1;
- (id)leaderIdentifier;
- (void)setIncludeTemporary:(bool)arg1;
- (void)setLeaderIdentifier:(id)arg1;

@end
