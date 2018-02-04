/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPhotoImageView : UIView <CLKMediaAssetViewDelegate> {
    <NTKPhotoImageViewDelegate> * _delegate;
    CLKMediaAssetView * _mediaAssetView;
    NTKPhoto * _photo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKPhotoImageViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *irisURL;
@property (nonatomic, readonly) bool isIrisVideoHidden;
@property (nonatomic, readonly) bool isPhotoIris;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interruptPlayback;
- (id)irisURL;
- (bool)isIrisVideoHidden;
- (bool)isPhotoIris;
- (bool)isPlaying;
- (id)localIdentifier;
- (void)mediaAssetViewDidBeginPlaying:(id)arg1;
- (void)mediaAssetViewDidEndPlaying:(id)arg1;
- (void)pauseWithMode:(long long)arg1;
- (void)playWithMode:(long long)arg1;
- (void)prepareToPlayWithMode:(long long)arg1;
- (void)resumeInterruptedPlayback;
- (void)setDelegate:(id)arg1;
- (void)setPhoto:(id)arg1 allowIris:(bool)arg2;

@end
