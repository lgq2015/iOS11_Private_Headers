/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingScrollInfo : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _interpageSpacing;
    double  _pagingFrictionAdjustment;
    double  _pagingSpringPullAdjustment;
    long long  _scrollDirections;
    bool  _shouldEnablePaging;
}

@property (setter=_setInterpageSpacing:, nonatomic) struct CGSize { double x1; double x2; } interpageSpacing;
@property (setter=_setPagingFrictionAdjustment:, nonatomic) double pagingFrictionAdjustment;
@property (setter=_setPagingSpringPullAdjustment:, nonatomic) double pagingSpringPullAdjustment;
@property (setter=_setScrollDirections:, nonatomic) long long scrollDirections;
@property (setter=_setShouldEnablePaging:, nonatomic) bool shouldEnablePaging;

+ (id)scrollInfoWithScrollDirections:(long long)arg1;
+ (id)scrollInfoWithScrollDirections:(long long)arg1 enabledPagingWithInterpageSpacing:(struct CGSize { double x1; double x2; })arg2;
+ (id)scrollInfoWithScrollDirections:(long long)arg1 enabledPagingWithInterpageSpacing:(struct CGSize { double x1; double x2; })arg2 pagingSpringPullAdjustment:(double)arg3 pagingFrictionAdjustment:(double)arg4;

- (void)_setInterpageSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)_setPagingFrictionAdjustment:(double)arg1;
- (void)_setPagingSpringPullAdjustment:(double)arg1;
- (void)_setScrollDirections:(long long)arg1;
- (void)_setShouldEnablePaging:(bool)arg1;
- (struct CGSize { double x1; double x2; })interpageSpacing;
- (double)pagingFrictionAdjustment;
- (double)pagingSpringPullAdjustment;
- (long long)scrollDirections;
- (bool)shouldEnablePaging;

@end
