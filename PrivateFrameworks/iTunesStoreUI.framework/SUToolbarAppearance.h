/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUToolbarAppearance : NSObject <NSCopying> {
    NSMutableDictionary * _backgroundImages;
    NSMutableDictionary * _shadowImages;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *tintColor;

+ (id)defaultToolbarAppearance;

- (id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)enumerateBackgroundImagesUsingBlock:(id /* block */)arg1;
- (void)enumerateShadowImagesUsingBlock:(id /* block */)arg1;
- (void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setShadowImage:(id)arg1 forPosition:(long long)arg2;
- (void)setTintColor:(id)arg1;
- (id)shadowImageForPosition:(long long)arg1;
- (void)styleToolbar:(id)arg1;
- (id)tintColor;

@end
