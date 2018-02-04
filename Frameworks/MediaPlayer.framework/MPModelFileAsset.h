/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelFileAsset : MPModelObject {
    NSString * _filePath;
    unsigned long long  _fileSize;
    bool  _nonPurgeable;
    long long  _protectionType;
    NSString * _purchaseBundleFilePath;
    long long  _qualityType;
}

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (getter=isNonPurgeable, nonatomic) bool nonPurgeable;
@property (nonatomic) long long protectionType;
@property (nonatomic, copy) NSString *purchaseBundleFilePath;
@property (nonatomic) long long qualityType;

+ (id)__MPModelPropertyFileAssetFilePath__PROPERTY;
+ (id)__MPModelPropertyFileAssetFileSize__PROPERTY;
+ (id)__MPModelPropertyFileAssetNonPurgeable__PROPERTY;
+ (id)__MPModelPropertyFileAssetProtectionType__PROPERTY;
+ (id)__MPModelPropertyFileAssetPurchaseBundleFilePath__PROPERTY;
+ (id)__MPModelPropertyFileAssetQualityType__PROPERTY;
+ (id)__filePath__KEY;
+ (id)__fileSize__KEY;
+ (id)__nonPurgeable__KEY;
+ (id)__protectionType__KEY;
+ (id)__purchaseBundleFilePath__KEY;
+ (id)__qualityType__KEY;
+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;
- (id)filePath;
- (unsigned long long)fileSize;
- (bool)isNonPurgeable;
- (long long)protectionType;
- (id)purchaseBundleFilePath;
- (long long)qualityType;
- (void)setFilePath:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setNonPurgeable:(bool)arg1;
- (void)setProtectionType:(long long)arg1;
- (void)setPurchaseBundleFilePath:(id)arg1;
- (void)setQualityType:(long long)arg1;

@end
