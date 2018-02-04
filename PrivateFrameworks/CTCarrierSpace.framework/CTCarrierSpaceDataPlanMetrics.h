/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding> {
    NSDate * _billingCycleEndDate;
    CTCarrierSpaceDataPlanMetricsItem * _domestic;
    NSNumber * _domesticCapacity;
    long long  _regStatus;
}

@property (nonatomic, retain) NSDate *billingCycleEndDate;
@property (nonatomic, retain) CTCarrierSpaceDataPlanMetricsItem *domestic;
@property (nonatomic, retain) NSNumber *domesticCapacity;
@property (nonatomic) long long regStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)billingCycleEndDate;
- (id)description;
- (id)domestic;
- (id)domesticCapacity;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)regStatus;
- (void)setBillingCycleEndDate:(id)arg1;
- (void)setDomestic:(id)arg1;
- (void)setDomesticCapacity:(id)arg1;
- (void)setRegStatus:(long long)arg1;

@end
