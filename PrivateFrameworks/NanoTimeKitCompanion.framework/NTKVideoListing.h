/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing> {
    long long  _clip;
    UIImage * _image;
    NSString * _name;
    UIColor * _overlayColor;
    unsigned long long  _tags;
    unsigned long long  _theme;
    NSString * _transitionImageName;
    long long  _variant;
    CLKVideo * _video;
    NSString * _videoName;
}

@property (nonatomic, readonly) long long clip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIColor *overlayColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long theme;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) CLKVideo *video;

- (void).cxx_destruct;
- (void)_setHasAssets;
- (long long)clip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)discardAssets;
- (bool)hasTag:(unsigned long long)arg1;
- (id)image;
- (id)initWithName:(id)arg1 videoName:(id)arg2 transitionImageName:(id)arg3 overlayColor:(id)arg4 theme:(unsigned long long)arg5 variant:(long long)arg6 clip:(long long)arg7 tags:(unsigned long long)arg8;
- (id)overlayColor;
- (bool)snapshotDiffers:(id)arg1;
- (unsigned long long)theme;
- (long long)variant;
- (id)video;

@end
