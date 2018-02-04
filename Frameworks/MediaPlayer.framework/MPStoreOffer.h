/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOffer : NSObject {
    unsigned long long  _entityPersistentID;
    NSString * _entityTitle;
    long long  _entityType;
    NSDictionary * _mediaAssetDictionary;
    NSDictionary * _offerDictionary;
    long long  _passType;
    MPStoreOffer * _regularPriceOffer;
}

@property (nonatomic, readonly, copy) NSString *actionDisplayTitle;
@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (nonatomic, readonly) long long buyType;
@property (nonatomic, readonly, copy) NSString *displayPrice;
@property (nonatomic, readonly, copy) NSString *displayTitle;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) unsigned long long entityPersistentID;
@property (nonatomic, readonly, copy) NSString *entityTitle;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) long long passType;
@property (nonatomic, readonly) double previewDuration;
@property (nonatomic, readonly, copy) NSURL *previewURL;
@property (nonatomic, readonly) float price;
@property (nonatomic, readonly, copy) NSString *regularPriceDisplayPrice;
@property (nonatomic, readonly) bool requiresConfirmation;

+ (id)_priceForOfferDictionary:(id)arg1;
+ (long long)bestOfferVariantInOfferDictionaries:(id)arg1 withPreferredVariant:(long long)arg2;
+ (long long)buyTypeForOfferDictionary:(id)arg1 regularPriceOffer:(id)arg2;
+ (void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variant:(long long)arg4;
+ (void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variantString:(id)arg4;
+ (id)offerVariantResponseKeyForOfferVariant:(long long)arg1;

- (void).cxx_destruct;
- (bool)_isBuy;
- (id)actionDisplayTitle;
- (id)buyParameters;
- (long long)buyType;
- (id)buyURL;
- (id)displayPrice;
- (id)displayTitle;
- (unsigned long long)downloadSize;
- (unsigned long long)entityPersistentID;
- (id)entityTitle;
- (long long)entityType;
- (id)initWithStoreOfferDictionary:(id)arg1 regularPriceOfferDictionary:(id)arg2 passType:(long long)arg3 entityType:(long long)arg4 persistentID:(unsigned long long)arg5 title:(id)arg6;
- (long long)passType;
- (double)previewDuration;
- (id)previewURL;
- (float)price;
- (id)regularPriceDisplayPrice;
- (bool)requiresConfirmation;
- (id)storeOfferDictionary;

@end
