/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCTrimAudioFileOperation : RCTrimTimeRangeOperation {
    RCCompositionComposedAssetWriter * _assetWriter;
    bool  _createWaveform;
    NSURL * _destinationURL;
    NSError * _error;
    double  _exportedDuration;
    NSURL * _sourceURL;
    bool  _success;
}

@property (nonatomic, readonly) bool createWaveform;
@property (nonatomic, readonly, copy) NSURL *destinationURL;
@property (nonatomic, readonly, copy) NSURL *sourceURL;

+ (id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (bool)createWaveform;
- (id)destinationURL;
- (id)error;
- (double)exportedDuration;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 createWaveform:(bool)arg3 timeRange:(struct { double x1; double x2; })arg4 trimMode:(long long)arg5;
- (void)main;
- (double)progress;
- (id)sourceURL;
- (bool)success;

@end
