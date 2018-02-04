/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowSettingsViewModel : PUViewModel {
    PUSlideshowMediaItem * _mediaItem;
    bool  _musicOn;
    OKProducerPreset * _preset;
    bool  _shouldRepeat;
    double  _stepDuration;
}

@property (nonatomic, retain) PUSlideshowMediaItem *mediaItem;
@property (getter=isMusicOn, nonatomic) bool musicOn;
@property (nonatomic, retain) OKProducerPreset *preset;
@property (nonatomic, readonly) NSDictionary *propertyDictionary;
@property (nonatomic) bool shouldRepeat;
@property (nonatomic) double stepDuration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentChange;
- (unsigned long long)hash;
- (id)initWithPropertyDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMusicOn;
- (id)mediaItem;
- (id)newViewModelChange;
- (id)preset;
- (id)propertyDictionary;
- (void)registerChangeObserver:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMusicOn:(bool)arg1;
- (void)setPreset:(id)arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setStepDuration:(double)arg1;
- (bool)shouldRepeat;
- (double)stepDuration;
- (void)unregisterChangeObserver:(id)arg1;

@end
