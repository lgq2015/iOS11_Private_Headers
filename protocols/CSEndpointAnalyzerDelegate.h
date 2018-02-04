/* made by EzioChiu.
 */

@protocol CSEndpointAnalyzerDelegate <NSObject>

@required

- (void)endpointer:(id <CSEndpointAnalyzer>)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(CSEndpointerMetrics *)arg3;
- (void)endpointer:(id <CSEndpointAnalyzer>)arg1 didDetectStartpointAtTime:(double)arg2;

@end
