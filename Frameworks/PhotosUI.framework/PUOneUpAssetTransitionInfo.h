/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpAssetTransitionInfo : NSObject {
    NSArray * _filters;
    UIImage * _image;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekTime;
}

@property (setter=_setFilters:, nonatomic, copy) NSArray *filters;
@property (setter=_setImage:, nonatomic, retain) UIImage *image;
@property (setter=_setSeekTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } seekTime;

+ (id)oneUpAssetTransitionInfoWithImage:(id)arg1;
+ (id)oneUpAssetTransitionInfoWithImage:(id)arg1 andSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
+ (id)oneUpAssetTransitionInfoWithImage:(id)arg1 filters:(id)arg2;

- (void).cxx_destruct;
- (void)_setFilters:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)filters;
- (id)image;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;

@end
