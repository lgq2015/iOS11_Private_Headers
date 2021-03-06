/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {
    TSPObjectContext * _context;
    NSDictionary * _dataInfos;
    bool  _deserializeAsPasteboard;
    NSDictionary * _identiferToResourceNameDictionary;
    NSDictionary * _identifierToObjectUUIDDictionary;
    bool  _resetObjectUUIDs;
    NSURL * _resourcesFolderURL;
    TSPComponent * _rootObjectComponent;
    bool  _shouldDecodeMissingDataAsRemote;
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
- (id)decodeObjectWithData:(id)arg1 packageURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (id)init;
- (id)initWithContext:(id)arg1;
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
