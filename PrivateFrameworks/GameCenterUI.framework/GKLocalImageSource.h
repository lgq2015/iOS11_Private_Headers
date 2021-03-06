/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKLocalImageSource : GKImageSource {
    NSMapTable * _keysForSizes;
}

@property (nonatomic, retain) NSMapTable *keysForSizes;

- (void)dealloc;
- (id)imageForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)keyForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)keysForSizes;
- (void)setKeysForSizes:(id)arg1;

@end
