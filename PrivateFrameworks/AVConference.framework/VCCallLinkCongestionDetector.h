/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCallLinkCongestionDetector : NSObject {
    bool  isLinkCongested;
    double  lossRateThreshold;
    double  rttThreshold;
}

@property (nonatomic) bool isLinkCongested;

- (void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3;
- (id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2;
- (bool)isLinkCongested;
- (void)setIsLinkCongested:(bool)arg1;

@end
