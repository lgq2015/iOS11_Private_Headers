/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {
    char * _channelNumberArray;
    char * _rssiArray;
    unsigned int  _rssiCount;
    unsigned int  _rssiIndex;
    unsigned int  _rssiMinCount;
}

- (void)dealloc;
- (id)initWithProximityInfo:(id)arg1;
- (bool)updateWithSFBLEDevice:(id)arg1;

@end
