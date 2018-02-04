/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKLineStylePicker : AKModernToolbarPicker {
    long long  _lineStyle;
    unsigned long long  _lineType;
}

@property (readonly) long long lineStyle;
@property (readonly) unsigned long long lineType;

- (id)_buttonImagesForType:(unsigned long long)arg1;
- (long long)_shapeTagForType:(unsigned long long)arg1;
- (void)_styleButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineType:(unsigned long long)arg2 controller:(id)arg3;
- (long long)lineStyle;
- (unsigned long long)lineType;
- (void)revalidateItems:(id)arg1;

@end
