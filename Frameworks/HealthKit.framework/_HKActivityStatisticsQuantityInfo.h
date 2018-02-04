/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKActivityStatisticsQuantityInfo : NSObject <HDCoding, NSSecureCoding> {
    NSDate * _endDate;
    HKQuantity * _quantityValue;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKQuantity *quantityValue;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)quantityValue;
- (void)setEndDate:(id)arg1;
- (void)setQuantityValue:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
