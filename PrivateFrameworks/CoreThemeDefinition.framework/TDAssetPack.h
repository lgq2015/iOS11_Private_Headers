/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDAssetPack : NSObject <NSCopying> {
    NSString * assetPackIdentifier;
    CUIMutableCommonAssetStorage * assetStore;
    NSString * outputPath;
    NSSet * tags;
    bool  wasModified;
}

@property (nonatomic, copy) NSString *assetPackIdentifier;
@property (retain) CUIMutableCommonAssetStorage *assetStore;
@property (nonatomic, copy) NSString *outputPath;
@property (nonatomic, retain) NSSet *tags;
@property (nonatomic) bool wasModified;

- (id)assetPackIdentifier;
- (id)assetStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)outputPath;
- (void)setAssetPackIdentifier:(id)arg1;
- (void)setAssetStore:(id)arg1;
- (void)setOutputPath:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setWasModified:(bool)arg1;
- (id)tags;
- (bool)wasModified;

@end
