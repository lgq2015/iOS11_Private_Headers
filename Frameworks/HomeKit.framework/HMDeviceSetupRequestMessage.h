/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMDeviceSetupRequestMessage : TRRequestMessage {
    NSData * _payload;
}

@property (nonatomic, readonly, copy) NSData *payload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)payload;

@end
