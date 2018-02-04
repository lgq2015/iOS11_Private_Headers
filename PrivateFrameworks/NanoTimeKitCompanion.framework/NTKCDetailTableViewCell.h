/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCDetailTableViewCell : UITableViewCell {
    UIView * _separatorView;
    bool  _showsSeparator;
}

@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic) bool showsSeparator;

+ (id)reuseIdentifier;
+ (id)titleFont;

- (void).cxx_destruct;
- (id)_disclosureChevronImage:(bool)arg1;
- (void)_fontSizeDidChange;
- (bool)_visibleAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)rowHeight;
- (id)separatorView;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSeparatorView:(id)arg1;
- (void)setShowsSeparator:(bool)arg1;
- (bool)showsSeparator;

@end
