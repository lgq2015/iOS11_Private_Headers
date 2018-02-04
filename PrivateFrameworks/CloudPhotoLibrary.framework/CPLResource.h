/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResource : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _backgroundDownloadTaskIdentifier;
    bool  _canGenerateDerivative;
    bool  _generateDerivative;
    CPLResourceIdentity * _identity;
    NSString * _itemIdentifier;
    unsigned long long  _resourceType;
}

@property (nonatomic) bool canGenerateDerivative;
@property (nonatomic) bool generateDerivative;
@property (nonatomic, retain) CPLResourceIdentity *identity;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic) unsigned long long resourceType;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (float)derivativeGenerationThreshold;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
+ (bool)hasPriorityBoostForResourceType:(unsigned long long)arg1;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1;
+ (id)shortDescriptionForResourceType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_backgroundDownloadTaskIdentifier;
- (void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1;
- (id)bestFileNameForResource;
- (bool)canGenerateDerivative;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)estimatedResourceSize;
- (bool)generateDerivative;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTrackedForUpload;
- (id)itemIdentifier;
- (unsigned long long)resourceType;
- (void)setCanGenerateDerivative:(bool)arg1;
- (void)setGenerateDerivative:(bool)arg1;
- (void)setIdentity:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setResourceType:(unsigned long long)arg1;
- (bool)shouldApplyDataProtection;
- (bool)shouldCopy;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)imageDerivativeTypes;
+ (id)videoDerivativeTypes;

- (bool)deleteAfterUpload;
- (void)setDeleteAfterUpload:(bool)arg1;

@end
