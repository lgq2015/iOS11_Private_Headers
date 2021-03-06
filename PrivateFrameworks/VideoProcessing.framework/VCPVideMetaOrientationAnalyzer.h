/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableArray * _results;
}

- (void).cxx_destruct;
- (id)convertQuickTimeVideoOrientationToUIOrientation:(long long)arg1;
- (id)init;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2;
- (id)publicResults;

@end
