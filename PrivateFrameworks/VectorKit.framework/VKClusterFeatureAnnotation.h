/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKClusterFeatureAnnotation : NSObject <VKCustomFeatureAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    VKCustomFeature * _customFeature;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)feature;
- (id)initWithClusterNode:(struct ClusterTreeClusterNode { int (**x1)(); struct Range<float> { float x_2_1_1; float x_2_1_2; } x2; struct Mercator2<double> { double x_3_1_1[2]; } x3; struct ClusterTreeClusterNode {} *x4; unsigned int x5; unsigned int x6; unsigned char x7; bool x8; struct _retain_ptr<id<VKCustomFeatureAnnotation>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_9_1_1)(); id x_9_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_9_1_3; const void*x_9_1_4; void*x_9_1_5; void*x_9_1_6; int x_9_1_7; in void*x_9_1_8; out unsigned int x_9_1_9/* : ? */; void*x_9_1_10; BOOL x_9_1_11; void*x_9_1_12; } x9; struct _release_objc { } x10; }*)arg1 clusterTree:(const struct shared_ptr<md::LabelClusterTree> { struct LabelClusterTree {} *x1; struct __shared_weak_count {} *x2; }*)arg2 baseStyle:(id)arg3 imageText:(id)arg4 annotationText:(id)arg5 annotationLocale:(id)arg6;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end
