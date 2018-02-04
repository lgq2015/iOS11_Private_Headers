/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAddPeopleTableHeaderFooterView : UITableViewHeaderFooterView {
    UIView * _bottomBorder;
    bool  _needsBottomBorder;
    bool  _needsTopBorder;
    UIView * _topBorder;
}

@property (nonatomic, retain) UIView *bottomBorder;
@property (nonatomic) bool needsBottomBorder;
@property (nonatomic) bool needsTopBorder;
@property (nonatomic, retain) UIView *topBorder;

+ (id)identifier;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)bottomBorder;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (bool)needsBottomBorder;
- (bool)needsTopBorder;
- (void)setBackgroundColor:(id)arg1;
- (void)setBottomBorder:(id)arg1;
- (void)setNeedsBottomBorder:(bool)arg1;
- (void)setNeedsTopBorder:(bool)arg1;
- (void)setTopBorder:(id)arg1;
- (id)topBorder;

@end
