/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHExternalAssetResource : PHAssetResource <PHCPLAssetResource> {
    unsigned long long  _cplResourceType;
    PHAssetResourceCreationOptions * _creationOptions;
    NSData * _data;
    bool  _duplicateAllowsReadAccess;
    bool  _isLibraryAssetResource;
    long long  _resourceType;
}

@property (nonatomic, readonly) unsigned long long cplResourceType;
@property (nonatomic, copy) PHAssetResourceCreationOptions *creationOptions;
@property (nonatomic, retain) NSData *data;
@property (setter=_setDuplicateAllowsReadAccess:, nonatomic) bool duplicateAllowsReadAccess;
@property (nonatomic, readonly) bool isLibraryAssetResource;

+ (id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(bool)arg2 error:(id*)arg3;
+ (unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)arg1;

- (void).cxx_destruct;
- (void)_setDuplicateAllowsReadAccess:(bool)arg1;
- (unsigned long long)cplResourceType;
- (id)creationOptions;
- (id)data;
- (bool)duplicateAllowsReadAccess;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithResourceType:(long long)arg1;
- (bool)isLibraryAssetResource;
- (id)originalFilename;
- (id)propertyListRepresentation;
- (void)setCreationOptions:(id)arg1;
- (void)setData:(id)arg1;
- (long long)type;
- (id)uniformTypeIdentifier;

@end
