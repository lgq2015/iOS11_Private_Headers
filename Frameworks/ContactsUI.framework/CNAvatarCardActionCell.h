/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardActionCell : UITableViewCell {
    CNQuickAction * _action;
    UIImageView * _actionImageView;
    long long  _context;
    CNAvatarCardHighlightView * _defaultHighlightView;
    UIButton * _expandButton;
    NSLayoutConstraint * _expandButtonWidthConstraint;
    bool  _gestureActivated;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    double  _initialTranslatingViewLeadingConstraintConstant;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLocation;
    unsigned long long  _lastScrollDirection;
    double  _lastScrollDirectionTimestamp;
    CNAvatarCardHighlightView * _moreHighlightView;
    NSLayoutConstraint * _moreHighlightViewHiddingConstraint;
    bool  _moreHighlighted;
    UILabel * _moreLabel;
    UIPageControl * _pageControl;
    NSLayoutConstraint * _pageControlLeadingConstraint;
    NSLayoutConstraint * _punchOutLeftConstraint;
    UIView * _separatorView;
    UILabel * _subtitleLabel;
    bool  _swipped;
    UILabel * _titleLabel;
    bool  _transitioning;
    UIView * _translatingView;
    NSLayoutConstraint * _translatingViewLeadingConstraint;
}

@property (nonatomic, retain) CNQuickAction *action;
@property (nonatomic, retain) UIImageView *actionImageView;
@property (nonatomic) long long context;
@property (nonatomic, retain) CNAvatarCardHighlightView *defaultHighlightView;
@property (nonatomic, retain) UIButton *expandButton;
@property (nonatomic, retain) NSLayoutConstraint *expandButtonWidthConstraint;
@property (nonatomic) bool gestureActivated;
@property (nonatomic) double initialTranslatingViewLeadingConstraintConstant;
@property (nonatomic) unsigned long long lastScrollDirection;
@property (nonatomic) double lastScrollDirectionTimestamp;
@property (nonatomic, retain) CNAvatarCardHighlightView *moreHighlightView;
@property (nonatomic, retain) NSLayoutConstraint *moreHighlightViewHiddingConstraint;
@property (nonatomic) bool moreHighlighted;
@property (nonatomic, retain) UILabel *moreLabel;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic, retain) NSLayoutConstraint *pageControlLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *punchOutLeftConstraint;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic) bool swipped;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool transitioning;
@property (nonatomic, retain) UIView *translatingView;
@property (nonatomic, retain) NSLayoutConstraint *translatingViewLeadingConstraint;

+ (id)cellNibForActions;
+ (id)cellNibForContacts;

- (void).cxx_destruct;
- (void)_updateFonts;
- (void)_updateHighlightAnimated:(bool)arg1;
- (id)action;
- (id)actionImageView;
- (void)awakeFromNib;
- (long long)context;
- (id)defaultHighlightView;
- (id)expandButton;
- (id)expandButtonWidthConstraint;
- (bool)gestureActivated;
- (double)initialTranslatingViewLeadingConstraintConstant;
- (unsigned long long)lastScrollDirection;
- (double)lastScrollDirectionTimestamp;
- (id)moreHighlightView;
- (id)moreHighlightViewHiddingConstraint;
- (bool)moreHighlighted;
- (id)moreLabel;
- (id)pageControl;
- (id)pageControlLeadingConstraint;
- (void)prepareForReuse;
- (id)punchOutLeftConstraint;
- (void)reloadData;
- (id)separatorView;
- (void)setAction:(id)arg1;
- (void)setActionImageView:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setDefaultHighlightView:(id)arg1;
- (void)setExpandButton:(id)arg1;
- (void)setExpandButtonWidthConstraint:(id)arg1;
- (void)setGestureActivated:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setInitialTranslatingViewLeadingConstraintConstant:(double)arg1;
- (void)setLastScrollDirection:(unsigned long long)arg1;
- (void)setLastScrollDirectionTimestamp:(double)arg1;
- (void)setMoreHighlightView:(id)arg1;
- (void)setMoreHighlightViewHiddingConstraint:(id)arg1;
- (void)setMoreHighlighted:(bool)arg1;
- (void)setMoreLabel:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPageControlLeadingConstraint:(id)arg1;
- (void)setPunchOutLeftConstraint:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSwipped:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setTranslatingView:(id)arg1;
- (void)setTranslatingViewLeadingConstraint:(id)arg1;
- (void)startTrackingWithGestureRecognizer:(id)arg1;
- (void)stopTrackingWithGestureRecognizer:(id)arg1;
- (id)subtitleLabel;
- (bool)swipped;
- (id)titleLabel;
- (void)trackHighlight:(id)arg1;
- (bool)transitioning;
- (id)translatingView;
- (id)translatingViewLeadingConstraint;

@end
