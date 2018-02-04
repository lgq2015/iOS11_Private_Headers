/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionEnginePipelineDiagnosticInfo : NSObject {
    double  _processingDuration;
    double  _totalDuration;
}

@property (nonatomic) double processingDuration;
@property (nonatomic) double totalDuration;

- (double)processingDuration;
- (void)setProcessingDuration:(double)arg1;
- (void)setTotalDuration:(double)arg1;
- (double)totalDuration;

@end
