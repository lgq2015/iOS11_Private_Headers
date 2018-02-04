/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SULoadMoreMediaCellConfiguration : SUItemCellConfiguration {
    double  _previousCellHeight;
}

@property (nonatomic) double previousCellHeight;

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)init;
- (double)previousCellHeight;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)setPreviousCellHeight:(double)arg1;

@end
