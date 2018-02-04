/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIArtworkList : NSObject <SKUIArtworkProviding> {
    NSMutableArray * _artworks;
}

@property (getter=_lookupArray, nonatomic, readonly) NSArray *_lookupArray;
@property (nonatomic, copy) NSArray *artworks;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIArtwork *largestArtwork;
@property (nonatomic, readonly) SKUIArtwork *smallestArtwork;
@property (readonly) Class superclass;

+ (id)artworkForSize:(long long)arg1 artworkDictionaries:(id)arg2;
+ (bool)canHandleArtworkFormat:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_lookupArray;
- (id)artworkForSize:(long long)arg1;
- (id)artworkURLForSize:(long long)arg1;
- (id)artworkWithWidth:(long long)arg1;
- (id)artworks;
- (id)bestArtworkForScaledSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bestArtworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)cacheRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasArtwork;
- (unsigned long long)hash;
- (id)initWithArtworkListArray:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupArray:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)largestArtwork;
- (id)preferredExactArtworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setArtworks:(id)arg1;
- (id)smallestArtwork;

@end
