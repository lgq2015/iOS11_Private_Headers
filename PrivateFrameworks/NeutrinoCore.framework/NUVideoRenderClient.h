/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoRenderClient : NURenderClient {
    NSArray * _pipelineFilters;
}

@property (nonatomic, copy) NSArray *pipelineFilters;

- (void).cxx_destruct;
- (id)pipelineFilters;
- (void)setPipelineFilters:(id)arg1;
- (void)submitPropertiesRequestForComposition:(id)arg1 completion:(id /* block */)arg2;

@end
