/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayAllDayView : UIView <EKDayOccurrenceViewDelegate, EKUITintColorUpdateDelegate> {
    UILabel * _allDay;
    bool  _allDayLabelHighlighted;
    bool  _allowSelection;
    long long  _birthdayCount;
    EKDayOccurrenceView * _birthdayCountOccurrenceView;
    <EKDayAllDayViewDelegate> * _delegate;
    EKEvent * _dimmedOccurrence;
    EKUIVisualEffectView * _dividerLineSuperview;
    UIView * _dividerLineViewBottom;
    UIView * _dividerLineViewTop;
    UIColor * _dividerLineVisualEffectColor;
    double  _fixedHeight;
    bool  _forceSingleColumnLayout;
    bool  _hideOccurrenceBackground;
    int  _maxVisibleRows;
    double  _occurrenceInset;
    NSMutableArray * _occurrenceViews;
    long long  _orientation;
    UIScrollView * _scroller;
    EKEvent * _selectedEvent;
    bool  _showBirthdayCount;
    bool  _showSelection;
    bool  _showsBorderLines;
    bool  _showsLabel;
    bool  _usesSmallText;
}

@property (nonatomic) bool allowsOccurrenceSelection;
@property (nonatomic) <EKDayAllDayViewDelegate> *delegate;
@property (nonatomic, retain) EKEvent *dimmedOccurrence;
@property (nonatomic) double fixedHeight;
@property (nonatomic) bool forceSingleColumnLayout;
@property (nonatomic) bool hideOccurrenceBackground;
@property (nonatomic) int maxVisibleRows;
@property (nonatomic, readonly) double naturalHeight;
@property (nonatomic) bool showBirthdayCountInsteadOfEvents;
@property (nonatomic) bool showsBorderLines;
@property (nonatomic) bool showsLabel;
@property (nonatomic) bool showsSelection;

+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
+ (id)unscaledAllDayFont;

- (void).cxx_destruct;
- (double)_allDayAreaHeightForEventCount:(long long)arg1;
- (double)_borderLineWidth;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (id)_findSelectedCopySubviewOfView:(id)arg1;
- (double)_height;
- (id)_selectedCopyView;
- (void)_setUpBirthdayCountViewIfNeeded;
- (void)addViewToScroller:(id)arg1;
- (bool)allowsOccurrenceSelection;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (bool)containsEvent:(id)arg1;
- (void)dayOccurrenceViewSelected:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 wasTapped:(bool)arg3;
- (id)delegate;
- (void)didMoveToWindow;
- (id)dimmedOccurrence;
- (double)firstEventYOffset;
- (double)fixedHeight;
- (bool)forceSingleColumnLayout;
- (bool)hideOccurrenceBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAllDayLabelHighlighted;
- (void)layoutSubviews;
- (int)maxVisibleRows;
- (double)naturalHeight;
- (double)nextAvailableOccurrenceViewYOrigin;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViews;
- (void)removeAllOccurrenceViews;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAllDayLabelColor:(id)arg1;
- (void)setAllDayLabelHighlighted:(bool)arg1;
- (void)setAllowsOccurrenceSelection:(bool)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setDividerLineVisualEffect:(id)arg1;
- (void)setFixedHeight:(double)arg1;
- (void)setForceSingleColumnLayout:(bool)arg1;
- (void)setHideOccurrenceBackground:(bool)arg1;
- (void)setMaxVisibleRows:(int)arg1;
- (void)setOccurrenceInset:(double)arg1 labelInset:(double)arg2;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setShowBirthdayCountInsteadOfEvents:(bool)arg1;
- (void)setShowsBorderLines:(bool)arg1;
- (void)setShowsLabel:(bool)arg1;
- (void)setShowsSelection:(bool)arg1;
- (void)setTopBorderLineHidden:(bool)arg1;
- (bool)showBirthdayCountInsteadOfEvents;
- (bool)showsBorderLines;
- (bool)showsLabel;
- (bool)showsSelection;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateLabelFont;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;

@end
