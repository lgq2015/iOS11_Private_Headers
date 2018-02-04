/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingData : NSObject <ARResultData, NSCopying> {
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  _blendShapeCoefficients;
    NSObject<OS_dispatch_semaphore> * _imageVerticesSemaphore;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _leftEyeTransform;
    void _lookAtPoint;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__first_"^ {}  _meshVertices;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__first_"^ {}  _normals;
    NSObject<OS_dispatch_semaphore> * _normalsSemaphore;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _rightEyeTransform;
    NSDictionary * _trackingData;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__first_"^ {}  _verticesImageSpace;
}

@property (nonatomic, readonly) const float*blendShapeCoefficients;
@property (nonatomic, readonly) unsigned long long blendShapeCoefficientsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**imageVertices;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } leftEyeTransform;
@property (nonatomic, readonly) void lookAtPoint;
@property (nonatomic, readonly) unsigned long long normalCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**normals;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rightEyeTransform;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *trackingData;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

+ (id)sharedNeutralGeometry;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_extractMetaData;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (const float*)blendShapeCoefficients;
- (unsigned long long)blendShapeCoefficientsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)imageVertices;
- (id)initWithTrackingData:(id)arg1;
- (bool)isValid;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })leftEyeTransform;
- (void)lookAtPoint;
- (unsigned long long)normalCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)normals;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rightEyeTransform;
- (id)trackingData;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
