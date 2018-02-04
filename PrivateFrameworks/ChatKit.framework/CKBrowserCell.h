/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserCell : UICollectionViewCell {
    CKBadgeView * _badgeView;
    UILabel * _browserLabel;
    <CKBrowserCellDelegate> * _delegate;
    bool  _jitter;
    unsigned long long  _shinyStatus;
    CKBrowserSelectionLabelAccessoryView * _shinyStatusView;
    bool  _shouldShowLabel;
}

@property (nonatomic, retain) CKBadgeView *badgeView;
@property (nonatomic, retain) UILabel *browserLabel;
@property (nonatomic) <CKBrowserCellDelegate> *delegate;
@property (readonly) UIView *iconView;
@property (nonatomic) bool jitter;
@property (nonatomic) unsigned long long shinyStatus;
@property (nonatomic, retain) CKBrowserSelectionLabelAccessoryView *shinyStatusView;
@property (nonatomic) bool shouldShowLabel;

+ (Class)classForItemType:(long long)arg1;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)badgeView;
- (id)browserLabel;
- (id)delegate;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)jitter;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBadgeView:(id)arg1;
- (void)setBrowserLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setJitter:(bool)arg1;
- (void)setShinyStatus:(unsigned long long)arg1;
- (void)setShinyStatusView:(id)arg1;
- (void)setShouldShowLabel:(bool)arg1;
- (unsigned long long)shinyStatus;
- (id)shinyStatusView;
- (bool)shouldShowLabel;

@end
