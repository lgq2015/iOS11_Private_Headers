/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetBatch : NSObject {
    NSMutableArray * _assetRecords;
    CKDAssetTokenRequest * _assetTokenRequest;
    CKDAssetZone * _assetZone;
    NSData * _authPutRequest;
    NSData * _authPutResponse;
    NSDictionary * _authPutResponseHeaders;
    bool  _isFailed;
}

@property (nonatomic, readonly) NSArray *allMMCSItems;
@property (nonatomic, readonly) NSArray *allMMCSSectionItems;
@property (nonatomic, retain) NSMutableArray *assetRecords;
@property (nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (nonatomic, retain) CKDAssetZone *assetZone;
@property (nonatomic, retain) NSData *authPutRequest;
@property (nonatomic, retain) NSData *authPutResponse;
@property (nonatomic, retain) NSDictionary *authPutResponseHeaders;
@property (nonatomic) bool isFailed;
@property (readonly) unsigned int size;
@property (readonly) unsigned int sizeUpperBound;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addAssetRecord:(id)arg1;
- (id)allMMCSAndSectionItems;
- (id)allMMCSItems;
- (id)allMMCSSectionItems;
- (id)assetRecords;
- (id)assetTokenRequest;
- (id)assetZone;
- (id)authPutRequest;
- (id)authPutResponse;
- (id)authPutResponseHeaders;
- (id)description;
- (id)firstMMCSItemError;
- (id)initWithAssetZone:(id)arg1;
- (bool)isEmpty;
- (bool)isFailed;
- (bool)isPackageSectionBatch;
- (void)setAssetRecords:(id)arg1;
- (void)setAssetTokenRequest:(id)arg1;
- (void)setAssetZone:(id)arg1;
- (void)setAuthPutRequest:(id)arg1;
- (void)setAuthPutResponse:(id)arg1;
- (void)setAuthPutResponseHeaders:(id)arg1;
- (void)setIsFailed:(bool)arg1;
- (unsigned int)size;
- (unsigned int)sizeUpperBound;

@end
