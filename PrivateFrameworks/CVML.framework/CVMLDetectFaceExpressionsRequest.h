/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLDetectFaceExpressionsRequest : CVMLRequest {
    NSError * _initializationError;
    NSArray * _mInputFaces;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)internalDetermineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 outputFacesThatNeed2DLandmarks:(id)arg4;
- (bool)internalProcessWithHandler:(id)arg1 error:(id*)arg2;

@end
