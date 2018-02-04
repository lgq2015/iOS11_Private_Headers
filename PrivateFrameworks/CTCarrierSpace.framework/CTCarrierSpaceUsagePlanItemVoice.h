/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceUsagePlanItemVoice : NSObject <NSSecureCoding> {
    NSString * _minutesCapacity;
    NSString * _minutesUsed;
}

@property (nonatomic, retain) NSString *minutesCapacity;
@property (nonatomic, retain) NSString *minutesUsed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)minutesCapacity;
- (id)minutesUsed;
- (void)setMinutesCapacity:(id)arg1;
- (void)setMinutesUsed:(id)arg1;

@end
