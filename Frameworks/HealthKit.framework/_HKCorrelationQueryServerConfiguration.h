/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration {
    NSDictionary * _filterDictionary;
}

@property (nonatomic, retain) NSDictionary *filterDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)filterDictionary;
- (id)initWithCoder:(id)arg1;
- (void)setFilterDictionary:(id)arg1;

@end
