/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMescalSession : NSObject {
    NSData * _certificateData;
    NSNumber * _sapVersion;
    NSURL * _setupURL;
    FCAsyncSerialQueue * _signatureQueue;
}

+ (id)sharedSession;

- (void).cxx_destruct;
- (void)_continueMescalSetupWithVersion:(unsigned int)arg1 hardwareInfo:(struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; })arg2 session:(struct FPSAPContextOpaque_ { }*)arg3 data:(id)arg4 setupURL:(id)arg5 completionHandler:(id /* block */)arg6;
- (bool)_prerequisitesHaveBeenSatisfied;
- (void)_satisfySessionPrerequisitesIfNeededWithCompletion:(id /* block */)arg1;
- (void)_setupNewSessionWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)signData:(id)arg1 usingMescalWithCompletion:(id /* block */)arg2;

@end
