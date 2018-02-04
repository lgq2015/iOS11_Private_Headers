/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    struct CGPoint { 
        double x; 
        double y; 
    }  _edgeParallaxOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _parallaxOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } edgeParallaxOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } parallaxOffset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })edgeParallaxOffset;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })parallaxOffset;
- (void)setEdgeParallaxOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParallaxOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
