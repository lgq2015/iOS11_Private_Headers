/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding> {
    VNImageBuffer * _imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    VNObservationsCache * _observationsCache;
    unsigned int  _qosClass;
    VNRequestPerformer * _requestPerformer_DO_NOT_DIRECTLY_ACCESS;
    NSCache * _requestToObservationCacheKeyMap;
}

- (void).cxx_destruct;
- (id)_observationCacheKeyForRequest:(id)arg1;
- (void)cacheObservationsForRequest:(id)arg1;
- (id)cachedObservationsForRequest:(id)arg1;
- (id)imageBufferAndReturnError:(id*)arg1;
- (id)initWithRequestPerformer:(id)arg1 imageBuffer:(id)arg2 observationsCache:(id)arg3;
- (id)initWithRequestPerformer:(id)arg1 imageBuffer:(id)arg2 observationsCache:(id)arg3 qosClass:(unsigned int)arg4;
- (id)modelRequestHandlerAndReturnError:(id*)arg1;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (unsigned int)qosClass;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (id)requestPerformerAndReturnError:(id*)arg1;
- (void)setModelRequestHandler:(id)arg1;

@end
