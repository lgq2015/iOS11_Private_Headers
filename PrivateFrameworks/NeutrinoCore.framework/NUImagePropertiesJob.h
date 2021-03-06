/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImagePropertiesJob : NURenderJob {
    <NUImageProperties> * _imageProperties;
}

- (void).cxx_destruct;
- (bool)prepare:(out id*)arg1;
- (id)result;
- (bool)wantsCompleteStage;
- (bool)wantsRenderStage;

@end
