/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface APCDecoderProcessor : NSObject {
    AUPasscodeDecoder * _decoderAU;
    NSMutableArray * _payloadsReceived;
    AUAudioUnitOfflineProcessor * _processor;
}

- (void).cxx_destruct;
- (id)initWithInputURL:(id)arg1 codecConfig:(id)arg2 error:(id*)arg3;
- (id)run;

@end
