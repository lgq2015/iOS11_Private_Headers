/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIArtworkTemplate : NSObject <SKUIArtworkProviding> {
    long long  _height;
    NSMutableSet * _servedArtworks;
    NSString * _urlTemplateString;
    long long  _width;
}

@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) SKUIArtwork *largestArtwork;
@property (nonatomic, readonly) NSMutableSet *servedArtworks;
@property (nonatomic, readonly) SKUIArtwork *smallestArtwork;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *urlTemplateString;
@property (nonatomic, readonly) long long width;

+ (bool)canHandleArtworkFormat:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_artworkURLWithWidth:(long long)arg1;
- (id)_artworkWithWidth:(long long)arg1;
- (id)_lookupDictionary;
- (struct CGSize { double x1; double x2; })_sizeForWidth:(long long)arg1;
- (id)_urlStringWithTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)artworkForSize:(long long)arg1;
- (id)artworkURLForSize:(long long)arg1;
- (id)artworkWithWidth:(long long)arg1;
- (id)bestArtworkForScaledSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bestArtworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)cacheRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasArtwork;
- (unsigned long long)hash;
- (long long)height;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)largestArtwork;
- (id)preferredExactArtworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)servedArtworks;
- (id)smallestArtwork;
- (id)urlTemplateString;
- (long long)width;

@end
