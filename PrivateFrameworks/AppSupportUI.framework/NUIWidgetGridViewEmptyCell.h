/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIWidgetGridViewEmptyCell : UIView <NUIWidgetGridViewCell> {
    NUIWidgetGridView * _gridView;
    unsigned long long  _index;
    double  _width;
}

@property (nonatomic, readonly) unsigned long long index;

- (void).cxx_destruct;
- (struct { double x1; double x2; })donatableSpace;
- (struct { double x1; double x2; })donatableSpaceAllowRemeasure:(bool)arg1;
- (unsigned long long)index;
- (id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;

@end
