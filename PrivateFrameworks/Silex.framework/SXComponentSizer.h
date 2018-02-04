/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentSizer : NSObject {
    SXComponent * _component;
    SXComponentLayout * _componentLayout;
    SXComponentStyle * _componentStyle;
    SXContext * _context;
    NSMutableDictionary * _infoForRendering;
    SXLayoutAttributes * _layoutAttributes;
    struct CGSize { 
        double width; 
        double height; 
    }  _suggestedSize;
}

@property (nonatomic, readonly) SXComponent *component;
@property (nonatomic, readonly) SXComponentLayout *componentLayout;
@property (nonatomic, readonly) SXComponentStyle *componentStyle;
@property (nonatomic, readonly) SXContext *context;
@property (nonatomic, readonly) NSMutableDictionary *infoForRendering;
@property (nonatomic, retain) SXLayoutAttributes *layoutAttributes;
@property (nonatomic) struct CGSize { double x1; double x2; } suggestedSize;

- (void).cxx_destruct;
- (bool)allowComponentIntersection;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)component;
- (id)componentLayout;
- (id)componentStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForSize:(struct CGSize { double x1; double x2; })arg1 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)context;
- (id)infoForRendering;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 context:(id)arg4 layoutAttributes:(id)arg5;
- (id)layoutAttributes;
- (long long)minimumColumnLength;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inColumnLayout:(id)arg2;
- (void)saveInfo:(id)arg1 forRenderingPhaseWithIdentifier:(id)arg2;
- (void)setLayoutAttributes:(id)arg1;
- (void)setSuggestedSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (id)snapLines;
- (struct CGSize { double x1; double x2; })suggestedSize;

@end
