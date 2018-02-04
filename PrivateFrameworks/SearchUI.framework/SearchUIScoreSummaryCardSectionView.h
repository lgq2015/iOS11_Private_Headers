/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerBoxViewDelegate> {
    TLKSplitHeaderView * _splitHeaderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TLKSplitHeaderView *splitHeaderView;
@property (readonly) Class superclass;

+ (id)dragTitleForCardSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;
+ (id)titleForScoreBoard:(id)arg1 forDisplay:(bool)arg2;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)setSplitHeaderView:(id)arg1;
- (id)setupContentView;
- (id)splitHeaderView;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithCardSection:(id)arg1;

@end
