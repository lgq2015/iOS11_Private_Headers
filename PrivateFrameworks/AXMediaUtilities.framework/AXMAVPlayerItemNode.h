/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMAVPlayerItemNode : AXMSourceNode <AVPlayerItemLegibleOutputPushDelegate> {
    AXMVisionAnalysisOptions * _analysisOptions;
    NSObject<OS_dispatch_queue> * _avkit_queue;
    AVPlayerItem * _targetPlayerItem;
    bool  _triggeringLegibilityEvents;
}

@property (nonatomic, retain) AXMVisionAnalysisOptions *analysisOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) AVPlayerItem *targetPlayerItem;
@property (getter=isTriggeringLegibilityEvents, nonatomic, readonly) bool triggeringLegibilityEvents;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)_mainQueue_endAutoTriggerOfLegibilityEvents;
- (id)analysisOptions;
- (void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg1;
- (id)axmDescription;
- (void)endAutoTriggerOfLegibilityEvents;
- (bool)isTriggeringLegibilityEvents;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)nodeInitialize;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void)setAnalysisOptions:(id)arg1;
- (void)setShouldProcessRemotely:(bool)arg1;
- (void)setTargetPlayerItem:(id)arg1;
- (id)targetPlayerItem;

@end
