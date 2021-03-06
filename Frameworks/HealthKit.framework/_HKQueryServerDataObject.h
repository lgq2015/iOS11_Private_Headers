/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKQueryServerDataObject : HKQueryServerConfiguration {
    double  _collectionInterval;
}

@property (nonatomic) double collectionInterval;
@property (nonatomic) bool shouldStayAliveAfterInitialResults;

+ (bool)supportsSecureCoding;

- (double)collectionInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setShouldStayAliveAfterInitialResults:(bool)arg1;
- (bool)shouldStayAliveAfterInitialResults;

@end
