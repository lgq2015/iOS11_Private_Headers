/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceUsageAccountMetrics : NSObject <NSSecureCoding> {
    NSArray * _applicablePlans;
    NSDate * _billingCycleEndDate;
    long long  _deviceType;
    bool  _localDevice;
    NSString * _networkUsageLabel;
    NSString * _planType;
    NSString * _subscriptionStatus;
}

@property (nonatomic, retain) NSArray *applicablePlans;
@property (nonatomic, retain) NSDate *billingCycleEndDate;
@property (nonatomic) long long deviceType;
@property (nonatomic) bool localDevice;
@property (nonatomic, retain) NSString *networkUsageLabel;
@property (nonatomic, retain) NSString *planType;
@property (nonatomic, retain) NSString *subscriptionStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicablePlans;
- (id)billingCycleEndDate;
- (id)description;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)localDevice;
- (id)networkUsageLabel;
- (id)planType;
- (void)setApplicablePlans:(id)arg1;
- (void)setBillingCycleEndDate:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setLocalDevice:(bool)arg1;
- (void)setNetworkUsageLabel:(id)arg1;
- (void)setPlanType:(id)arg1;
- (void)setSubscriptionStatus:(id)arg1;
- (id)subscriptionStatus;

@end
