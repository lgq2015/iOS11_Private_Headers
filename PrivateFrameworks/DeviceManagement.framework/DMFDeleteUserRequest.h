/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFDeleteUserRequest : CATTaskRequest {
    bool  _forceDeletion;
    NSString * _username;
}

@property (nonatomic) bool forceDeletion;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceDeletion;
- (id)initWithCoder:(id)arg1;
- (void)setForceDeletion:(bool)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end