/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIRowCardSectionView : SearchUICardSectionView

@property (retain) TLKSimpleRowView *contentView;

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (double)separatorInsetForLeadingImageForSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithCardSection:(id)arg1;

@end
