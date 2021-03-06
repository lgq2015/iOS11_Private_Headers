/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRequest : NSObject <NSCopying, VNObservationsCacheKeyProviding, VNSequencedRequestSupporting, VNWarningRecorder> {
    NSObject<OS_dispatch_queue> * _cancellationQueue;
    NSObject<OS_dispatch_semaphore> * _cancellationSemaphore;
    bool  _cancellationTriggered;
    id /* block */  _completionHandler;
    unsigned long long  _detectionLevel;
    bool  _dumpIntermediateImages;
    unsigned long long  _metalContextPriority;
    unsigned long long  _modelFileBackingStore;
    NSDictionary * _options;
    bool  _preferBackgroundProcessing;
    <MTLDevice> * _preferredMetalContext;
    NSString * _requestName;
    NSArray * _results;
    bool  _usesCPUOnly;
    VNWarningRecorder * _warningRecorder;
}

@property (retain) NSObject<OS_dispatch_semaphore> *cancellationSemaphore;
@property bool cancellationTriggered;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long detectionLevel;
@property (nonatomic) bool disallowsGPUUse;
@property (nonatomic) bool dumpIntermediateImages;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long metalContextPriority;
@property (nonatomic) unsigned long long modelFileBackingStore;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic) bool preferBackgroundProcessing;
@property (nonatomic, retain) <MTLDevice> *preferredMetalContext;
@property (nonatomic, readonly, copy) NSString *requestName;
@property (nonatomic, readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) bool usesCPUOnly;

+ (bool)defaultRequestInstanceWarmUpPerformer:(id)arg1 error:(id*)arg2;
+ (bool)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5;
+ (bool)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5;
+ (bool)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5;
+ (bool)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3;
+ (bool)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5;
+ (bool)getRequiredObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5;
+ (void)initialize;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (id)requestWithName:(id)arg1 options:(id)arg2;
+ (id)requestWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_updateVNRequestOptionPreferredMetalContext;
- (void)applyConfigurationOfRequest:(id)arg1;
- (void)cancel;
- (id)cancellationSemaphore;
- (bool)cancellationTriggered;
- (id /* block */)completionHandler;
- (void)copyStateOfRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dependencyProcessingOrdinality;
- (unsigned long long)detectionLevel;
- (bool)disallowsGPUUse;
- (bool)dumpIntermediateImages;
- (bool)hasCancellationHook;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalCancelInContext:(id)arg1 error:(id*)arg2;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (unsigned long long)metalContextPriority;
- (unsigned long long)modelFileBackingStore;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (id)options;
- (bool)performInContext:(id)arg1 error:(id*)arg2;
- (bool)preferBackgroundProcessing;
- (id)preferredMetalContext;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)requestName;
- (id)results;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setCancellationSemaphore:(id)arg1;
- (void)setCancellationTriggered:(bool)arg1;
- (void)setDetectionLevel:(unsigned long long)arg1;
- (void)setDisallowsGPUUse:(bool)arg1;
- (void)setDumpIntermediateImages:(bool)arg1;
- (void)setMetalContextPriority:(unsigned long long)arg1;
- (void)setModelFileBackingStore:(unsigned long long)arg1;
- (void)setPreferBackgroundProcessing:(bool)arg1;
- (void)setPreferredMetalContext:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setUsesCPUOnly:(bool)arg1;
- (void)setValue:(id)arg1 forPrivateOption:(id)arg2;
- (void)setValue:(id)arg1 forRequestOption:(id)arg2;
- (bool)usesCPUOnly;
- (bool)validateConfigurationAndReturnError:(id*)arg1;
- (bool)validateImageBuffer:(id)arg1 ofNonZeroWidth:(unsigned long long*)arg2 andHeight:(unsigned long long*)arg3 error:(id*)arg4;
- (id)valueForPrivateOption:(id)arg1;
- (id)valueForWarning:(id)arg1;
- (bool)wantsSequencedRequestObservationsRecording;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;
- (id)warnings;

@end
