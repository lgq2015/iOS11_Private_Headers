/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreAsset : MPModelObject {
    unsigned long long  _accountIdentifier;
    long long  _endpointType;
    NSString * _redownloadParameters;
    bool  _redownloadable;
    bool  _shouldReportPlayEvents;
    bool  _subscriptionRequired;
}

@property (nonatomic) unsigned long long accountIdentifier;
@property (nonatomic) long long endpointType;
@property (nonatomic, copy) NSString *redownloadParameters;
@property (getter=isRedownloadable, nonatomic) bool redownloadable;
@property (nonatomic) bool shouldReportPlayEvents;
@property (getter=isSubscriptionRequired, nonatomic) bool subscriptionRequired;

+ (id)__MPModelPropertyStoreAssetAccountIdentifier__PROPERTY;
+ (id)__MPModelPropertyStoreAssetEndpointType__PROPERTY;
+ (id)__MPModelPropertyStoreAssetRedownloadParameters__PROPERTY;
+ (id)__MPModelPropertyStoreAssetRedownloadable__PROPERTY;
+ (id)__MPModelPropertyStoreAssetShouldReportPlayEvents__PROPERTY;
+ (id)__MPModelPropertyStoreAssetSubscriptionRequired__PROPERTY;
+ (id)__accountIdentifier__KEY;
+ (id)__endpointType__KEY;
+ (id)__redownloadParameters__KEY;
+ (id)__redownloadable__KEY;
+ (id)__shouldReportPlayEvents__KEY;
+ (id)__subscriptionRequired__KEY;
+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (unsigned long long)accountIdentifier;
- (id)descriptionWithType:(long long)arg1;
- (long long)endpointType;
- (bool)isRedownloadable;
- (bool)isSubscriptionRequired;
- (id)redownloadParameters;
- (void)setAccountIdentifier:(unsigned long long)arg1;
- (void)setEndpointType:(long long)arg1;
- (void)setRedownloadParameters:(id)arg1;
- (void)setRedownloadable:(bool)arg1;
- (void)setShouldReportPlayEvents:(bool)arg1;
- (void)setSubscriptionRequired:(bool)arg1;
- (bool)shouldReportPlayEvents;

@end
