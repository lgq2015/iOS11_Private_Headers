/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARMarkerTrackingTechnique : ARTechnique {
    struct shared_ptr<acv::math::PinholeCamera> { 
        struct PinholeCamera {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _camera;
    struct map<int, acv::vision::marker::DetectedMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::DetectedMarker> > > { 
        struct __tree<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, acv::vision::marker::DetectedMarker> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _detectedMarkers;
    struct MarkerDetector { struct shared_ptr<acv::vision::marker::MarkerDetectorImpl> { struct MarkerDetectorImpl {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct Settings { int x_2_1_1; unsigned char x_2_1_2; int x_2_1_3; int x_2_1_4; bool x_2_1_5; int x_2_1_6; } x2; struct map<int, acv::vision::marker::ReferenceMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::ReferenceMarker> > > { struct __tree<std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, acv::vision::marker::ReferenceMarker> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::ReferenceMarker>, std::__1::less<int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; } * _detector;
    NSArray * _markers;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIDMarker:(id)arg1;
- (id)initWithIDMarkers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
