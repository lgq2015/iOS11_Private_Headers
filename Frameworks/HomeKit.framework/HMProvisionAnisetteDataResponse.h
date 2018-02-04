/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMProvisionAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {
    bool  _didSucceed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSucceed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *messagePayload;
@property (readonly) Class superclass;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)xpcMessageName;

- (id)description;
- (bool)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (void)setDidSucceed:(bool)arg1;
- (id)xpcMessageName;

@end
