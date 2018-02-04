/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBurstSession : NSObject {
    CIBurstImageSet * __burstImageSet;
    unsigned long long  _count;
    unsigned long long  _estimatedCount;
    bool  _finalized;
}

@property (nonatomic, readonly) CIBurstImageSet *_burstImageSet;
@property (setter=_setCount:, nonatomic) unsigned long long count;
@property (setter=_setEstimatedCount:, nonatomic) unsigned long long estimatedCount;
@property (getter=_isFinalized, setter=_setFinalized:, nonatomic) bool finalized;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)_burstImageSet;
- (bool)_isFinalized;
- (void)_setCount:(unsigned long long)arg1;
- (void)_setEstimatedCount:(unsigned long long)arg1;
- (void)_setFinalized:(bool)arg1;
- (void)addStillImageCaptureResult:(id)arg1;
- (void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)estimatedCount;
- (id)identifier;
- (id)init;
- (id)performBurstAnalysisForDevice:(long long)arg1;

@end
