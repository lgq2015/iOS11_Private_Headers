/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageAnalyzer : NSObject

- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 landscape:(bool)arg4 results:(id)arg5;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)analyzePixelBufferInTiles:(struct __CVBuffer { }*)arg1 results:(id)arg2 cancel:(id /* block */)arg3;
- (int)calculateTextureness:(float*)arg1 height:(int)arg2 width:(int)arg3 sdof:(bool)arg4 result:(char *)arg5;
- (int)processTile:(struct __CVBuffer { }*)arg1 results:(id)arg2 cancel:(id /* block */)arg3;

@end
