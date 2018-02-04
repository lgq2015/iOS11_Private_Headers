/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCtrTracker : NSObject <VCPBaseTracker> {
    struct CGPoint { double x1; double x2; } * P;
    float  _confidence;
    struct { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct tplTracker_resampler_context {} *x4; struct { /* ? */ } *x5; } * context;
    bool  lostTrack;
    bool  stable;
}

@property struct CGPoint { double x1; double x2; }*box;
@property float confidence;
@property bool lostTrackInd;
@property bool stableInd;

- (struct CGPoint { double x1; double x2; }*)box;
- (float)confidence;
- (void)dealloc;
- (id)init;
- (bool)lostTrackInd;
- (void)setBox:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setConfidence:(float)arg1;
- (void)setLostTrackInd:(bool)arg1;
- (void)setStableInd:(bool)arg1;
- (void)setupTrackerWithReferenceFrame:(struct __CVBuffer { }*)arg1 withROI:(struct CGPoint { double x1; double x2; }*)arg2;
- (bool)stableInd;
- (void)trackInFrame:(struct __CVBuffer { }*)arg1;

@end
