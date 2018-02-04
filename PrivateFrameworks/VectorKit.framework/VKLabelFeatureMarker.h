/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelFeatureMarker : VKFeatureMarker {
    struct shared_ptr<md::LabelFeatureMarker> { 
        struct LabelFeatureMarker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _actualLabelFeatureMarker;
}

@property (nonatomic) int viewProximity;

+ (id)markerWithLabelFeatureMarker:(const struct shared_ptr<md::LabelFeatureMarker> { struct LabelFeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)closestApproach;
- (struct CGVector { double x1; double x2; })direction;
- (id)initWithFeatureMarkerPtr:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)initWithLabelFeatureMarkerPtr:(const struct shared_ptr<md::LabelFeatureMarker> { struct LabelFeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)setViewProximity:(int)arg1;
- (int)viewProximity;

@end
