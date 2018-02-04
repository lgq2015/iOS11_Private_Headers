/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUControlAppearance : NSObject <NSCopying> {
    NSMutableDictionary * _images;
    NSMutableDictionary * _textAttributes;
    NSMutableDictionary * _titlePositions;
}

@property (nonatomic, readonly) long long numberOfImages;

- (id)_copyKeyForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)enumerateImagesUsingBlock:(id /* block */)arg1;
- (void)enumerateTextAttributesUsingBlock:(id /* block */)arg1;
- (void)enumerateTitlePositionsUsingBlock:(id /* block */)arg1;
- (id)imageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (long long)numberOfImages;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)styleBarButtonItem:(id)arg1;
- (void)styleButton:(id)arg1;
- (id)textAttributesForState:(unsigned long long)arg1;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForBarMetrics:(long long)arg1;

@end
