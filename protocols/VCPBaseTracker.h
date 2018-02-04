/* made by EzioChiu.
 */

@protocol VCPBaseTracker

@required

- (struct CGPoint { double x1; double x2; }*)box;
- (id)init;
- (bool)lostTrackInd;
- (void)setBox:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setLostTrackInd:(bool)arg1;
- (void)setStableInd:(bool)arg1;
- (void)setupTrackerWithReferenceFrame:(struct __CVBuffer { }*)arg1 withROI:(struct CGPoint { double x1; double x2; }*)arg2;
- (bool)stableInd;
- (void)trackInFrame:(struct __CVBuffer { }*)arg1;

@end
