/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFProximityEstimator : NSObject {
    long long  _estimatedRSSI;
    long long  _rssiThreshold;
}

@property (nonatomic, readonly) long long estimatedRSSI;

+ (id)proximityEstimatorWithProximityInfo:(id)arg1;

- (long long)estimatedRSSI;
- (id)initWithProximityInfo:(id)arg1;
- (bool)updateWithSFBLEDevice:(id)arg1;

@end
