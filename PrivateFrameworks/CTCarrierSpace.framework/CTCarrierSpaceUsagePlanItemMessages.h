/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceUsagePlanItemMessages : NSObject <NSSecureCoding> {
    NSString * _capacity;
    NSString * _used;
}

@property (nonatomic, retain) NSString *capacity;
@property (nonatomic, retain) NSString *used;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capacity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCapacity:(id)arg1;
- (void)setUsed:(id)arg1;
- (id)used;

@end
