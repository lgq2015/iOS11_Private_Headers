/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeImageSizeView : MFComposeHeaderView {
    UISegmentedControl * _segmentedControl;
    NSMutableArray * _visibleScales;
}

- (unsigned long long)_insertIndexForScale:(unsigned long long)arg1;
- (unsigned long long)_scaleLabelIndexForScale:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)removeSizeDescriptionForScale:(unsigned long long)arg1;
- (void)segmentedControlChanged;
- (void)setScale:(unsigned long long)arg1;
- (void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2;

@end
