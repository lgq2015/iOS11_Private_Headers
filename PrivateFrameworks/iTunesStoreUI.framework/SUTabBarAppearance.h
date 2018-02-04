/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTabBarAppearance : NSObject <NSCopying> {
    UIImage * _backgroundImage;
    UIImage * _dividerImage;
    UIImage * _selectedDividerImage;
    UIImage * _selectionIndicatorImage;
    double  _tabBarButtonSpacing;
    double  _tabBarButtonWidth;
    NSMutableDictionary * _titleTextAttributes;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIImage *dividerImage;
@property (nonatomic, retain) UIImage *selectedDividerImage;
@property (nonatomic, retain) UIImage *selectionIndicatorImage;
@property (nonatomic) double tabBarButtonSpacing;
@property (nonatomic) double tabBarButtonWidth;

- (id)backgroundImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dividerImage;
- (void)enumerateTitleTextAttributesUsingBlock:(id /* block */)arg1;
- (id)selectedDividerImage;
- (id)selectionIndicatorImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setDividerImage:(id)arg1;
- (void)setSelectedDividerImage:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setTabBarButtonSpacing:(double)arg1;
- (void)setTabBarButtonWidth:(double)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (double)tabBarButtonSpacing;
- (double)tabBarButtonWidth;
- (id)titleTextAttributesForState:(unsigned long long)arg1;

@end
