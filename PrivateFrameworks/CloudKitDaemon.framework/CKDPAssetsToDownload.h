/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {
    bool  _allAssets;
    CKDPRequestedFields * _assetFields;
    struct { 
        unsigned int allAssets : 1; 
    }  _has;
}

@property (nonatomic) bool allAssets;
@property (nonatomic, retain) CKDPRequestedFields *assetFields;
@property (nonatomic) bool hasAllAssets;
@property (nonatomic, readonly) bool hasAssetFields;

- (void).cxx_destruct;
- (bool)allAssets;
- (id)assetFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllAssets;
- (bool)hasAssetFields;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAllAssets:(bool)arg1;
- (void)setAssetFields:(id)arg1;
- (void)setHasAllAssets:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
