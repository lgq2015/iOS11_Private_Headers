/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout {
    double  mEndClipT;
    double  mStartClipT;
}

- (struct CGPoint { double x1; double x2; })controlPointForPointA:(struct CGPoint { double x1; double x2; })arg1 pointB:(struct CGPoint { double x1; double x2; })arg2 andOriginalA:(struct CGPoint { double x1; double x2; })arg3 originalB:(struct CGPoint { double x1; double x2; })arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (id)quadraticCurve:(struct CGPoint { double x1; double x2; })arg1;

@end
