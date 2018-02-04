/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate> {
    TPMarginAdjustRep * _marginAdjustRep;
    CALayer * _separatorLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TPMarginAdjustRep *marginAdjustRep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bodyReps;
- (bool)canSelectChildRep:(id)arg1;
- (bool)childRepIsMasterDrawable:(id)arg1;
- (bool)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (void)dealloc;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (id)hitMasterRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (id)layerClass;
- (id)marginAdjustRep;
- (bool)masksToBounds;
- (id)p_bodyRepThatCanSelectChildRep:(id)arg1;
- (bool)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)p_hitRep:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (bool)p_pageRequiresSeparator;
- (void)p_updateBorderLayers;
- (void)p_updateLayoutBordersVisibility;
- (void)selectChildRep:(id)arg1 extendingSelection:(bool)arg2;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showHUDForWPRep:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)willBeRemoved;

@end
