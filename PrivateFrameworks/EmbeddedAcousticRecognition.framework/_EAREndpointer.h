/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EAREndpointer : NSObject {
    struct unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer> > { 
        struct __compressed_pair<quasar::HybridEndpointer *, std::__1::default_delete<quasar::HybridEndpointer> > { 
            struct HybridEndpointer {} *__first_; 
        } __ptr_; 
    }  _endpointer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)acceptEagerResultWithFeatures:(id)arg1 featuresToLog:(id*)arg2;
- (id)defaultServerEndpointFeatures;
- (bool)didEndpointWithFeatures:(id)arg1 audioTimestamp:(double)arg2 featuresToLog:(id*)arg3 endpointPosterior:(float*)arg4 extraDelayMs:(int*)arg5;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delaysTrigger:(bool)arg2 modelVersion:(id*)arg3;
- (id)initWithConfiguration:(id)arg1 modelVersion:(id*)arg2;
- (bool)requestSupportedWithSamplingRate:(unsigned long long)arg1;
- (void)updateEndpointerDelayedTriggerSwitch:(bool)arg1;
- (void)updateEndpointerThresholdWithValue:(float)arg1;

@end
