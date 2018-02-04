/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperDefaultConfiguration : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSString * _proceduralWallpaperIdentifier;
    NSDictionary * _proceduralWallpaperOptions;
    NSURL * _staticImageURL;
    NSURL * _videoURL;
    UIColor * _wallpaperColor;
    NSString * _wallpaperColorName;
    long long  _wallpaperType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *proceduralWallpaperIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *proceduralWallpaperOptions;
@property (nonatomic, readonly, copy) NSURL *staticImageURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *videoURL;
@property (nonatomic, readonly, copy) UIColor *wallpaperColor;
@property (nonatomic, readonly, copy) NSString *wallpaperColorName;
@property (nonatomic, readonly) long long wallpaperType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initColorWithColor:(id)arg1;
- (id)initColorWithColorName:(id)arg1;
- (id)initProceduralWithIdentifier:(id)arg1 options:(id)arg2;
- (id)initStaticWithImageURL:(id)arg1;
- (id)initVideoWithStaticImageURL:(id)arg1 videoURL:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proceduralWallpaperIdentifier;
- (id)proceduralWallpaperOptions;
- (id)staticImageURL;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)videoURL;
- (id)wallpaperColor;
- (id)wallpaperColorName;
- (long long)wallpaperType;

@end
