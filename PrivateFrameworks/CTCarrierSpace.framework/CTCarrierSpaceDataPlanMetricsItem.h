/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding> {
    unsigned long long  _capacity;
    NSNumber * _capacityBytes;
    bool  _capacityValid;
    long long  _units;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic, retain) NSNumber *capacityBytes;
@property (nonatomic) bool capacityValid;
@property (nonatomic) long long units;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)capacity;
- (id)capacityBytes;
- (bool)capacityValid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setCapacityBytes:(id)arg1;
- (void)setCapacityValid:(bool)arg1;
- (void)setUnits:(long long)arg1;
- (long long)units;

@end
