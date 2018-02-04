/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (readonly) SearchUICardSectionView *cardSectionView;
@property (retain) SearchUICardSectionView *sizingContainer;

- (id)cardSectionView;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
