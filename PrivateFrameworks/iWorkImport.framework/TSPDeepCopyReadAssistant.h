/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {
    NSDictionary * _cachedDataMap;
    TSPObject * _cachedMetadataObject;
    TSPComponent * _component;
    TSPObjectContext * _context;
    TSPDeepCopyObjectMap * _objectMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) bool hasDocumentVersionUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCrossAppPaste;
@property (nonatomic, readonly) bool isCrossDocumentPaste;
@property (nonatomic, readonly) long long sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedDataForIdentifier:(long long)arg1;
- (id)cachedMetadataObject;
- (bool)canResolveExternalReferences;
- (id)dataInfoForIdentifier:(long long)arg1;
- (id)decodeDeepCopySerializedData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (id)init;
- (id)initWithContext:(id)arg1 objectMap:(id)arg2 cachedMetadataObject:(id)arg3 cachedDataMap:(id)arg4;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (id)metadataComponent;
- (long long)objectIdentifierForUUID:(id)arg1;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (bool)processMetadataObject:(id)arg1 error:(id*)arg2;
- (id)rootObjectComponent;
- (bool)shouldDecodeMissingDataAsRemote;
- (bool)shouldResolveExternalReferencesUsingObjectUUID;
- (long long)sourceType;

@end