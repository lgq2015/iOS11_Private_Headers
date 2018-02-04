/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoRenderJob : NURenderJob

- (id)generateVideoComposition:(out id*)arg1;
- (bool)prepare:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (id)videoRenderRequest;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputVideo;
- (bool)wantsRenderStage;

@end
