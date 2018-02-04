/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchLocationRequest : CATTaskRequest {
    NSString * _originator;
}

@property (nonatomic, copy) NSString *originator;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)originator;
- (void)setOriginator:(id)arg1;

@end
