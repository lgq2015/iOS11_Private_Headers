/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView {
    NSArray * _constraints;
    NSArray * _items;
    NSMutableArray * _labels;
    UILayoutGuide * _leftColumnGuide;
    bool  _needToRecalculateWidth;
    unsigned long long  _numberOfColumns;
    UILayoutGuide * _rightColumnGuide;
    double  _width;
}

@property (nonatomic, retain) NSArray *items;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_createConstraints;
- (void)_updateFontAndTextColor:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (void)layoutSubviews;
- (void)setItems:(id)arg1;

@end
