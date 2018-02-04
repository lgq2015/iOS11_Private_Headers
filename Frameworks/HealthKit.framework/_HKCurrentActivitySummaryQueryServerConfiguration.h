/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration {
    NSDictionary * _collectionIntervals;
}

@property (nonatomic, copy) NSDictionary *collectionIntervals;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionIntervals;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCollectionIntervals:(id)arg1;

@end
