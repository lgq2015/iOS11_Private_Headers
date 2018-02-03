/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedTexture : CUINamedLookup {
    double  _scale;
    struct _cuintproperties { 
        unsigned int exifOrientation : 4; 
        unsigned int isAlphaCropped : 1; 
        unsigned int isOpaque : 1; 
        unsigned int _reserved : 26; 
    }  _textureProperties;
}

@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) bool isAlphaCropped;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (bool)_cacheRenditionProperties;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alphaCroppedRect;
- (id)description;
- (int)exifOrientation;
- (bool)isAlphaCropped;
- (bool)isOpaque;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;
- (id)textureWithBufferAllocator:(id)arg1;

@end