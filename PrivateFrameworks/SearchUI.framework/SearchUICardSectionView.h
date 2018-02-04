/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerStackViewDelegate> {
    UIView * _chevronView;
    UIView * _contentView;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    SFCardSection * _section;
    bool  _spansFullWidth;
    unsigned long long  _style;
}

@property (retain) UIView *chevronView;
@property (retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFCardSection *section;
@property (readonly) bool spansFullWidth;
@property unsigned long long style;
@property (readonly) Class superclass;

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (Class)layerClass;
+ (double)separatorInsetForLeadingImageForSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)chevronView;
- (id)contentView;
- (void)didInvalidateSizeAnimate:(bool)arg1;
- (id)feedbackDelegate;
- (id)initWithCardSection:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (void)openPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)presentViewController:(id)arg1;
- (id)section;
- (id)sendFeedbackForPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)setChevronView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (id)setupContentView;
- (bool)spansFullWidth;
- (unsigned long long)style;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithCardSection:(id)arg1;

@end
