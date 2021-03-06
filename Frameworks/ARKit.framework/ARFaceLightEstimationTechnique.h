/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceLightEstimationTechnique : ARTechnique {
    bool  _cameraTransformAvailable;
    NSObject<OS_dispatch_semaphore> * _estimatingSemaphore;
    struct FLEOptions { 
        float smoothingAlpha; 
        int maxSHDegree; 
        float lightIntensityMinimumConstraint; 
        bool ransacEnabled; 
        bool chromaEnabled; 
        int ransacMinSampleSet; 
        float ransacErrorThreshold; 
        bool darkBehindHead; 
    }  _faceLightEstimationOptions;
    struct FacialLightEstimation { 
        int (**_vptr$FacialLightEstimation)(); 
        struct Matrix<float, 0, 1> { 
            float *m_data; 
            unsigned long long m_capacity; 
            unsigned int m_rows; 
        } m_validSampleIntensities; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } m_validChromaSampleIDS; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } m_sampleIndices_all; 
        struct Matrix<float, 0, 0> { 
            float *m_data; 
            unsigned long long m_capacity; 
            unsigned int m_rows; 
            unsigned int m_cols; 
        } m_validRtfs; 
        float m_gamma; 
        struct shared_ptr<acv::vision::algorithms::PrecomputedFaceData> { 
            struct PrecomputedFaceData {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_precomputedFaceData; 
        struct Optional<cva::Matrix<float, 9, 1>, void> { 
            struct unique_ptr<cva::Matrix<float, 9, 1>, std::__1::default_delete<cva::Matrix<float, 9, 1> > > { 
                struct __compressed_pair<cva::Matrix<float, 9, 1> *, std::__1::default_delete<cva::Matrix<float, 9, 1> > > { 
                    struct Matrix<float, 9, 1> {} *__first_; 
                } __ptr_; 
            } m_value; 
        } m_averageSHCoeff; 
        struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
                unsigned long long *__first_; 
            } __end_cap_; 
        } m_inliers; 
    }  _faceLightEstimator;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastCameraTransform;
    ARFaceTrackingData * _lastFaceData;
    ARDirectionalLightEstimate * _lastLightEstimate;
    NSObject<OS_dispatch_queue> * _lightEstimationQueue;
    float  _lightIntensity;
    struct __CVBuffer { } * _pixelBufferRef;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
    float  _shSmoothingAlpha;
    float  _temperature;
}

+ (float)_computeShSmoothingAlpha:(double)arg1;
+ (struct ImageViewT<unsigned char> { struct shared_ptr<acv::graphics::ImageBuffer<unsigned char> > { struct ImageBuffer<unsigned char> {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; })_cvPixelBufferToACVGray:(struct __CVBuffer { }*)arg1;
+ (struct shared_ptr<acv::vision::algorithms::FaceTrackingData> { struct FaceTrackingData {} *x1; struct __shared_weak_count {} *x2; })_transformFaceTrackingData:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_computeLightIntensity:(float)arg1 samplingInterval:(double)arg2;
- (void)dealloc;
- (id)init;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
