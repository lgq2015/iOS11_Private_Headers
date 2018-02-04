/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUHistogramRenderResult : _NURenderResult <NUHistogramRenderResult> {
    NUImageHistogram * _histogram;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NUImageHistogram *histogram;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)histogram;
- (id)initWithHistogram:(id)arg1;

@end
