/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceLegacyRegistry : NSObject {
    NSDictionary * _metadataDictionary;
}

@property (readonly) NSDictionary *metadataDictionary;

+ (void)setSharedSageRegistryMetadataURL:(id)arg1;
+ (void)setSharedTangierRegistryMetadataURL:(id)arg1;
+ (id)sharedSageRegistry;
+ (id)sharedSageRegistryMetadataURL;
+ (id)sharedTangierRegistry;
+ (id)sharedTangierRegistryMetadataURL;

- (void).cxx_destruct;
- (id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg1;
- (id)init;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithMetadataURL:(id)arg1;
- (id)metadataDictionary;
- (id)metadataDictionaryKeyForRelativePath:(id)arg1;

@end
