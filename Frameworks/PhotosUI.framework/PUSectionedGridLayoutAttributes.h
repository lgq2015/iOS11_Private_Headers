/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes {
    bool  _exists;
    bool  _extendsTopContent;
    bool  _floating;
    double  _interactiveTransitionProgress;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool extendsTopContent;
@property (nonatomic) bool floating;
@property (nonatomic) double interactiveTransitionProgress;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)exists;
- (bool)extendsTopContent;
- (bool)floating;
- (id)init;
- (double)interactiveTransitionProgress;
- (bool)isEqual:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setExtendsTopContent:(bool)arg1;
- (void)setFloating:(bool)arg1;
- (void)setInteractiveTransitionProgress:(double)arg1;

@end
