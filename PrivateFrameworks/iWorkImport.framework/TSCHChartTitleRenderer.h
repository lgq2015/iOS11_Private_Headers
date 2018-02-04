/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTitleRenderer : TSCHRenderer {
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

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2;
- (bool)canEditTextForSelectionPath:(id)arg1;
- (bool)canRenderSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEditingTextForSelectionPath:(id)arg1;
- (double)frameHeightChangeForPath:(id)arg1;
- (void)p_drawTitle:(struct CGContext { }*)arg1 rangePtr:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rawFrameForEditingTextForSelectionPath:(id)arg1;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (void)useEditedString:(id)arg1;

@end
