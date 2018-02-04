/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotationDrawing : NSObject

+ (id)_createLigtherColor:(struct CGColor { }*)arg1 withIntensity:(double)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedRectForBox:(long long)arg1 withAnnotation:(id)arg2;
+ (struct CGPath {}**)createCGPathArrayWithBezierPaths:(id)arg1;
+ (void)createPillBezier:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
+ (void)drawArrowFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 open:(bool)arg3 inContext:(struct CGContext { }*)arg4 withBorder:(id)arg5;
+ (void)drawBulletAtPoint:(struct CGPoint { double x1; double x2; })arg1 shape:(int)arg2 inContext:(struct CGContext { }*)arg3 withBorder:(id)arg4;
+ (void)drawCheckBox:(id)arg1 inContext:(struct CGContext { }*)arg2 withState:(long long)arg3 withBackgroundColor:(id)arg4 withBorderColor:(id)arg5 withFontColor:(id)arg6 isHighlighted:(bool)arg7;
+ (void)drawComboBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withAnnotation:(id)arg3 withStringValue:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6 withRotation:(long long)arg7;
+ (void)drawDisclosureBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
+ (void)drawInContext:(struct CGContext { }*)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPopupAnnotation:(id)arg3;
+ (void)drawListBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withAnnotation:(id)arg3 withOptions:(id)arg4 withStringValue:(id)arg5 withFont:(id)arg6 withFontColor:(id)arg7 withRotation:(long long)arg8;
+ (void)drawPushButton:(id)arg1 inContext:(struct CGContext { }*)arg2 withBackgroundColor:(id)arg3 withCaption:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6 isHighlighted:(bool)arg7;
+ (void)drawRadioButton:(id)arg1 inContext:(struct CGContext { }*)arg2 withState:(long long)arg3 withBackgroundColor:(id)arg4 withBorderColor:(id)arg5 withFontColor:(id)arg6 isHighlighted:(bool)arg7;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withAKAnnotation:(id)arg3 forAnnotation:(id)arg4;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withButtonWidgetAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withChoiceWidgetAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withCircleAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withFreeTextAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withInkAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withLineAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withLinkAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withMarkupAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withPopupAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withSquareAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withStampAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withTextAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withTextWidgetAnnotation:(id)arg3;
+ (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withUnknownAnnotation:(id)arg3;
+ (void)fillOval:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 context:(struct CGContext { }*)arg3;
+ (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 context:(struct CGContext { }*)arg3;
+ (bool)renderString:(id)arg1 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 font:(id)arg3 color:(id)arg4 alignment:(long long)arg5 rotation:(int)arg6 breaks:(bool)arg7 context:(struct CGContext { }*)arg8 withAnnotation:(id)arg9;
+ (id)stringByTrimmingTrailingCharactersInSet:(id)arg1 forString:(id)arg2;
+ (void)strokeOval:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 context:(struct CGContext { }*)arg3;
+ (void)strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 context:(struct CGContext { }*)arg3;

@end
