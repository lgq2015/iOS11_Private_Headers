/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMagicMoveTextureZOrderer : NSObject {
    NSArray * _incomingTexturesInZOrder;
    NSArray * _outgoingTexturesInZOrder;
    NSArray * _percentTextures;
    double * _percentTexturesTimes;
    unsigned long long  _zOrderIntersectionsCount;
    NSArray * _zOrderMatches;
}

@property (nonatomic, readonly) unsigned long long zOrderIntersectionsCount;

- (void)dealloc;
- (id)initWithAnimationMatches:(id)arg1;
- (void)p_addVisibleTexturesFromMatches:(id)arg1 toArray:(id)arg2 interpolatedPercent:(double)arg3;
- (id)p_arrayBySortingMatches:(id)arg1 withInterpolatedPercent:(double)arg2;
- (unsigned long long)p_bestZIndexForUnassignedMatch:(id)arg1 inMatchArray:(id)arg2;
- (void)p_calculateTextureArraysFromIntersections;
- (void)p_setupZOrderMatchesWithAnimationMatches:(id)arg1;
- (unsigned long long)p_zIntersectionsBetweenZOrdererMatches:(id)arg1;
- (id)texturedRectanglesAtPercent:(double)arg1;
- (unsigned long long)zOrderIntersectionsCount;

@end
