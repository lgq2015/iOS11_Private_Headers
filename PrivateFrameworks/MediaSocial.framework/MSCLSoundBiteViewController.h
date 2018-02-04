/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSoundBiteViewController : UIViewController <MSCLAudioPlayerDelegate, MSCLSoundBiteViewDelegate, MSCLVoiceRecorderDelegate> {
    MSCLAttachment * _attachment;
    MSCLAudioPlayer * _audioPlayer;
    SKUIClientContext * _clientContext;
    MSCLConfiguration * _configuration;
    <MSCLSoundBiteViewControllerDelegate> * _delegate;
    bool  _isExplicit;
    NSNumberFormatter * _leadingZeroFormatter;
    NSNumberFormatter * _numberFormatter;
    long long  _recordingActivationMode;
    NSString * _recordingFilePath;
    double  _recordingStartTime;
    MSCLSoundBiteView * _soundBiteView;
    MSCLVoiceRecorder * _voiceRecorder;
    MSCLWaveformImageProducer * _waveformImageProducer;
}

@property (nonatomic, readonly) MSCLAttachment *attachment;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) MSCLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLSoundBiteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) MSCLAttachmentPreviewView *view;

- (void).cxx_destruct;
- (void)_endAudioPlayback;
- (double)_maximumRecordingDuration;
- (void)_reloadSoundBitePlaybackUI;
- (void)_reloadSoundBiteRecordedUI;
- (void)_reloadSoundBiteRecordingUI;
- (void)_startRecordingWithActivationMode:(long long)arg1;
- (id)_timeStringWithSeconds:(double)arg1;
- (id)attachment;
- (void)audioPlayer:(id)arg1 didChangeStatus:(id)arg2;
- (void)audioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (id)clientContext;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setClientContext:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)soundBiteViewDidHoldRecordButton:(id)arg1;
- (void)soundBiteViewDidReleaseRecordButton:(id)arg1;
- (void)soundBiteViewDidToggleExplicit:(id)arg1;
- (void)soundBiteViewDidTogglePlayback:(id)arg1;
- (void)soundBiteViewFaceProximityDidBegin:(id)arg1;
- (void)soundBiteViewFaceProximityDidEnd:(id)arg1;
- (void)stopPlayback;
- (void)voiceRecorder:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (void)voiceRecorder:(id)arg1 didUpdateAveragePower:(float)arg2;

@end
