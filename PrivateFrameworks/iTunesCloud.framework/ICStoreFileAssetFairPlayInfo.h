/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreFileAssetFairPlayInfo : NSObject <NSCopying> {
    NSDictionary * _responseSinfDictionary;
}

@property (nonatomic, readonly, copy) NSData *dpInfoData;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSData *pinfData;
@property (nonatomic, readonly, copy) NSDictionary *purchaseBundleSinfDictionary;
@property (nonatomic, readonly, copy) NSDictionary *responseSinfDictionary;
@property (nonatomic, readonly, copy) NSData *sinf2Data;
@property (nonatomic, readonly, copy) NSData *sinfData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dpInfoData;
- (long long)identifier;
- (id)initWithResponseSinfDictionary:(id)arg1;
- (id)pinfData;
- (id)purchaseBundleSinfDictionary;
- (id)responseSinfDictionary;
- (id)sinf2Data;
- (id)sinfData;

@end
