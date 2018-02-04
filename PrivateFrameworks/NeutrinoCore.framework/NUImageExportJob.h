/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageExportJob : NUExportJob {
    NSData * _destinationData;
}

- (void).cxx_destruct;
- (id)_filterProperties:(id)arg1;
- (void)cleanUp;
- (id)imageDestinationOptions;
- (id)imageExportRequest;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithImageExportRequest:(id)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
