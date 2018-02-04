/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrack : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _bestOfferDictionary;
    NSDate * _expirationDate;
    bool  _isPreorderAlbum;
    NSMutableDictionary * _trackDictionary;
}

@property (nonatomic, readonly, copy) NSData *adData;
@property (nonatomic, readonly) RadioTrackAdInfo *adInfo;
@property (nonatomic, readonly) RadioAudioClip *afterPromoAudioClip;
@property (nonatomic, readonly, copy) NSString *album;
@property (nonatomic, readonly, copy) NSString *albumBuyButtonText;
@property (nonatomic, readonly) long long albumBuyButtonType;
@property (nonatomic, readonly) long long albumID;
@property (nonatomic, readonly, copy) NSURL *albumURL;
@property (nonatomic, readonly, copy) NSString *artist;
@property (nonatomic, readonly) RadioArtworkCollection *artworkCollection;
@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly) RadioAudioClip *beforePromoAudioClip;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly) long long dateFetched;
@property (nonatomic, readonly, copy) NSString *debugMessage;
@property (nonatomic, readonly) double duration;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSDictionary *feedbackDictionaryRepresentation;
@property (nonatomic, readonly) bool hasLyrics;
@property (nonatomic) bool inWishList;
@property (nonatomic, readonly) bool isExplicit;
@property (nonatomic, readonly) bool isPreorderAlbum;
@property (nonatomic, readonly) int likeStatus;
@property (nonatomic, copy) NSDictionary *metadataDictionary;
@property (nonatomic, readonly, copy) NSArray *offers;
@property (nonatomic, readonly, copy) NSURL *previewURL;
@property (nonatomic, readonly) long long shuffleSeed;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) long long storeID;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSDictionary *trackDictionary;
@property (nonatomic, readonly, copy) NSDictionary *trackInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_offers;
- (void)_performTransaction:(id /* block */)arg1;
- (void)_performTransactionAndWait:(id /* block */)arg1;
- (void)_performWriteTransaction:(id /* block */)arg1;
- (void)_performWriteTransactionAndWait:(id /* block */)arg1;
- (id)_valueOfClass:(Class)arg1 forAssetInfoKey:(id)arg2;
- (id)_valueOfClass:(Class)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)_valueRespondingToSelector:(SEL)arg1 forAssetInfoKey:(id)arg2;
- (id)_valueRespondingToSelector:(SEL)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)adData;
- (id)adInfo;
- (id)afterPromoAudioClip;
- (id)album;
- (id)albumBuyButtonText;
- (long long)albumBuyButtonType;
- (long long)albumID;
- (id)albumURL;
- (id)artist;
- (id)artworkCollection;
- (id)assets;
- (id)beforePromoAudioClip;
- (id)copyrightText;
- (long long)dateFetched;
- (id)debugMessage;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)feedbackDictionaryRepresentation;
- (bool)hasLyrics;
- (bool)inWishList;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackDictionary:(id)arg1;
- (bool)isExplicit;
- (bool)isPreorderAlbum;
- (int)likeStatus;
- (id)metadataDictionary;
- (id)offers;
- (id)previewURL;
- (void)setExpirationDate:(id)arg1;
- (void)setInWishList:(bool)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (long long)shuffleSeed;
- (double)startTime;
- (long long)storeID;
- (id)title;
- (id)trackDictionary;
- (id)trackInfo;

@end
