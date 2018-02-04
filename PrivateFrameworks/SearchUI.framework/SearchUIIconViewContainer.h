/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIIconViewContainer : UIView {
    NSArray * _iconViewWidthConstraints;
    NSArray * _iconViews;
    NSArray * _spacerLayoutGuideWidthConstraints;
    NSArray * _spacerLayoutGuides;
    NSLayoutConstraint * _trailingConstraint;
}

@property (retain) NSArray *iconViewWidthConstraints;
@property (retain) NSArray *iconViews;
@property (retain) NSArray *spacerLayoutGuideWidthConstraints;
@property (retain) NSArray *spacerLayoutGuides;
@property (retain) NSLayoutConstraint *trailingConstraint;

+ (unsigned long long)maximumNumberOfColumns;
+ (unsigned long long)numberOfColumnsForCurrentOrientation;
+ (unsigned long long)numberOfColumnsForLandscape;
+ (unsigned long long)numberOfColumnsForPortrait;

- (void).cxx_destruct;
- (id)iconViewWidthConstraints;
- (id)iconViews;
- (id)initWithStyle:(unsigned long long)arg1 cell:(id)arg2;
- (void)setIconViewWidthConstraints:(id)arg1;
- (void)setIconViews:(id)arg1;
- (void)setSpacerLayoutGuideWidthConstraints:(id)arg1;
- (void)setSpacerLayoutGuides:(id)arg1;
- (void)setTrailingConstraint:(id)arg1;
- (id)spacerLayoutGuideWidthConstraints;
- (id)spacerLayoutGuides;
- (id)trailingConstraint;

@end