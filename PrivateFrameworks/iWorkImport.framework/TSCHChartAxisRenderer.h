/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisRenderer : TSCHRenderer <TSCHCompositeRendering> {
    TSCHSelectionPath * mAxisTitleSelectionPath;
    NSString * mEditingString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mStartingEditingFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *editingString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2;
- (id)axisLayoutItem;
- (id)axisTitleSelectionPath;
- (bool)canEditTextForSelectionPath:(id)arg1;
- (bool)canRenderSelectionPath:(id)arg1;
- (void)dealloc;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)editingString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEditingTextForSelectionPath:(id)arg1;
- (bool)isCompositeRenderer;
- (bool)needsAnySeparateLayers;
- (void)p_addLinePath:(struct CGContext { }*)arg1 stroke:(id)arg2;
- (void)p_addTickmarkPaths:(struct CGContext { }*)arg1 axis:(id)arg2 locations:(id)arg3 stroke:(id)arg4 width:(float)arg5;
- (void)p_debugRenderTickmarkArea:(struct CGContext { }*)arg1;
- (void)p_drawTitle:(struct CGContext { }*)arg1 rangePtr:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (bool)p_isTitleVisible;
- (bool)p_needsPositionBasedTransparencyLayer;
- (bool)p_needsSharedTickMarkLayer;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (void)setEditingString:(id)arg1;
- (id)transparencyLayers;
- (void)useEditedString:(id)arg1;
- (void)willBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext { }*)arg2;

@end
