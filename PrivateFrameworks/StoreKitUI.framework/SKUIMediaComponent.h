/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSString * _accessibilityLabel;
    long long  _alignment;
    double  _duration;
    SKUILink * _link;
    long long  _mediaAppearance;
    long long  _mediaIdentifier;
    long long  _mediaType;
    NSString * _mediaURLString;
    <SKUIArtworkProviding> * _thumbnailArtworkProvider;
    NSString * _title;
    float  _titleFontSize;
    long long  _titleFontWeight;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) long long alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUILink *link;
@property (nonatomic, readonly) long long mediaAppearance;
@property (nonatomic, readonly) long long mediaIdentifier;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSString *mediaURLString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SKUIArtworkProviding> *thumbnailArtworkProvider;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) float titleFontSize;
@property (nonatomic, readonly) long long titleFontWeight;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (long long)alignment;
- (id)bestThumbnailArtwork;
- (id)bestThumbnailForWidth:(double)arg1;
- (long long)componentType;
- (double)duration;
- (id)initWithArtwork:(id)arg1;
- (id)initWithArtworkProvider:(id)arg1;
- (id)initWithArtworkProvider:(id)arg1 appearance:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)link;
- (long long)mediaAppearance;
- (long long)mediaIdentifier;
- (long long)mediaType;
- (id)mediaURLString;
- (id)metricsElementName;
- (id)thumbnailArtworkProvider;
- (id)title;
- (float)titleFontSize;
- (long long)titleFontWeight;
- (id)valueForMetricsField:(id)arg1;

@end
