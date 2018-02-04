/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupBasedVisualization : CHVisualization {
    NSSet * _activeStrokeGroupAncestorIdentifiers;
    bool  _newGroupsDefaultToActive;
    CHRecognitionSessionResult * _resultDrawn;
}

@property (nonatomic, copy) NSSet *activeStrokeGroupAncestorIdentifiers;
@property (nonatomic) <CHStrokeGroupBasedVisualizationDelegate> *delegate;
@property (nonatomic, readonly) bool newGroupsDefaultToActive;
@property (nonatomic, retain) CHRecognitionSessionResult *resultDrawn;

- (void)_markStrokeGroupsAsActive:(id)arg1;
- (id)activeStrokeGroupAncestorIdentifiers;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dirtyRectForStrokeGroup:(id)arg1;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)newGroupsDefaultToActive;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (id)resultDrawn;
- (void)setActiveStrokeGroupAncestorIdentifiers:(id)arg1;
- (void)setResultDrawn:(id)arg1;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
