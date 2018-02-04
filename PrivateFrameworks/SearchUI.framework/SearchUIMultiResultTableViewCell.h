/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell {
    SearchUIIconViewContainer * _bottomContainer;
    NSLayoutConstraint * _doubleRowConstraint;
    long long  _indexOfSelectedKeyboardIcon;
    NSArray * _results;
    NSLayoutConstraint * _singleRowConstraint;
    SearchUIIconViewContainer * _topContainer;
}

@property (retain) SearchUIIconViewContainer *bottomContainer;
@property (retain) NSLayoutConstraint *doubleRowConstraint;
@property (nonatomic) long long indexOfSelectedKeyboardIcon;
@property (retain) NSArray *results;
@property (retain) NSLayoutConstraint *singleRowConstraint;
@property (retain) SearchUIIconViewContainer *topContainer;

+ (unsigned long long)numberOfColumnsForCurrentOrientation;
+ (void)removeDropShadowIconStateForView:(id)arg1;

- (void).cxx_destruct;
- (id)bottomContainer;
- (bool)canSetupKeyboardHandler;
- (id)doubleRowConstraint;
- (id)iconContainers;
- (long long)indexOfSelectedKeyboardIcon;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (bool)isExpandable;
- (void)layoutSubviews;
- (bool)navigateKeyboardLeft;
- (bool)navigateKeyboardRight;
- (unsigned long long)numberOfVisibleColumns;
- (unsigned long long)numberOfVisibleResults;
- (void)removeKeyboardHandler;
- (id)results;
- (void)returnKeyPressed;
- (void)setBottomContainer:(id)arg1;
- (void)setDoubleRowConstraint:(id)arg1;
- (void)setIndexOfSelectedKeyboardIcon:(long long)arg1;
- (void)setResults:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSingleRowConstraint:(id)arg1;
- (void)setTopContainer:(id)arg1;
- (void)setupKeyboardHandler;
- (id)singleRowConstraint;
- (id)topContainer;
- (void)updateExpanded:(bool)arg1;
- (void)updateNumberOfColumns;
- (void)updateSpacerWidthsForPlatterInsets;
- (void)updateWithRowModel:(id)arg1;
- (id)visibleResults;

@end
