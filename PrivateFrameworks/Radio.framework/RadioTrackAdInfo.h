/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackAdInfo : NSObject <NSSecureCoding> {
    bool  _gatewayAdSlot;
    NSString * _slotIdentifier;
}

@property (getter=isGatewayAdSlot, nonatomic, readonly) bool gatewayAdSlot;
@property (nonatomic, readonly, copy) NSString *slotIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdInfoDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isGatewayAdSlot;
- (id)slotIdentifier;

@end
