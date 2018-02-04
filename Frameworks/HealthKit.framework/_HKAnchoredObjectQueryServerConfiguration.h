/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration {
    HKQueryAnchor * _anchor;
    double  _collectionInterval;
    bool  _includeDeletedObjects;
    unsigned long long  _limit;
}

@property (nonatomic, retain) HKQueryAnchor *anchor;
@property (nonatomic) double collectionInterval;
@property (nonatomic) bool includeDeletedObjects;
@property (nonatomic) unsigned long long limit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (double)collectionInterval;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeDeletedObjects;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (void)setAnchor:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setIncludeDeletedObjects:(bool)arg1;
- (void)setLimit:(unsigned long long)arg1;

@end
