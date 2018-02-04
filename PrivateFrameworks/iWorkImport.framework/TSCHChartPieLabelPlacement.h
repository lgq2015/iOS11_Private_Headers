/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieLabelPlacement : NSObject {
    NSArray * mAllWedgeLayoutInfos;
    NSArray * mAllWedgeLayoutInfosSortedBySeriesIndex;
}

@property (nonatomic, readonly) NSArray *allWedgeLayoutInfos;

- (void).cxx_destruct;
- (id)allWedgeLayoutInfos;
- (struct CGPoint { double x1; double x2; })calloutLineEndpointForWedgeLayoutInfo:(id)arg1;
- (bool)calloutLineEndpointPastStartpoint:(id)arg1;
- (bool)calloutLineEndsOutsidePieWedge:(id)arg1;
- (long long)calloutLineRenderAmount:(id)arg1 startLineEnd:(id)arg2 endLineEnd:(id)arg3 stroke:(id)arg4;
- (struct CGPoint { double x1; double x2; })calloutLineStartpointForWedgeLayoutInfo:(id)arg1;
- (double)distanceFromCenterToChordOfLength:(double)arg1 wedgeAngle:(double)arg2;
- (id)initWithArrayOfWedgeLayoutInfos:(id)arg1;
- (double)lineEndLength:(id)arg1 stroke:(id)arg2;
- (double)minimumNecessaryDistanceFromWedgeTipForWedgeLayoutInfo:(id)arg1;
- (double)minimumNecessaryDistanceFromWedgeTipToWedgeLabelToPreventOverlapForWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2;
- (id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id*)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id*)arg5 stroke:(id)arg6 outStroke:(id*)arg7 context:(struct CGContext { }*)arg8 contextScale:(float)arg9;
- (id)newPathForLineEnd:(id)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 angle:(double)arg3 stroke:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformOutwardsAlongWedgeBisectionForWedgeLayoutInfo:(id)arg1 withMinimumNecessaryDistance:(double)arg2;
- (id)updateLabelTransformsToPreventOverlap;

@end
