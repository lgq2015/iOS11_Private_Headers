/* made by EzioChiu.
 */

@protocol TSDAutoscrollDelegate

@required

- (TSDAutoscroll *)autoscroll;
- (struct CGPoint { double x1; double x2; })autoscrollPoint;
- (void)autoscrollWillNotStart;
- (TSDInteractiveCanvasController *)icc;
- (void)setAutoscroll:(TSDAutoscroll *)arg1;
- (void)setAutoscrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateAfterAutoscroll:(TSDAutoscroll *)arg1;

@optional

- (int)allowedAutoscrollDirections;
- (bool)autoscrollWithDirection:(void *)arg1 proposedContentOffset:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: int, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (unsigned long long)maximumAutoscrollDeltaForCount:(unsigned long long)arg1;
- (double)unscaledStartAutoscrollThreshold;

@end
