/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableFileManager : NSObject {
    TSUPathSet * _claimedPaths;
    NSMutableSet * _deletedIdentifiers;
    NSString * _directoryPath;
    bool  _isCullingDisabled;
    TSUTemporaryDirectory * _modifiedFilesDirectory;
    NSMutableSet * _modifiedIdentifiers;
    NSMutableSet * _newIdentifiers;
    bool  _shouldCreate;
}

- (void).cxx_destruct;
- (id)_claimedPaths;
- (id)_filePathForIdentifier:(id)arg1;
- (id)_filePathForModifiedIdentifier:(id)arg1;
- (id)_modifiedFilesDirectoryPath;
- (void)_writeDataFromInputStream:(id)arg1 length:(long long)arg2 toPath:(id)arg3;
- (id)addDataFromInputStream:(id)arg1 length:(long long)arg2 filenameHint:(id)arg3;
- (id)addDataRepresentation:(id)arg1 filenameHint:(id)arg2;
- (bool)commitWithError:(id*)arg1;
- (void)disableFileCulling;
- (id)initWithPath:(id)arg1 shouldCreate:(bool)arg2;
- (bool)prepareForSaveToPath:(id)arg1 error:(id*)arg2;
- (bool)rehomeOntoPath:(id)arg1;
- (void)removeIdentifier:(id)arg1;
- (id)representationForIdentifier:(id)arg1;
- (void)setDataFromInputStream:(id)arg1 length:(long long)arg2 forIdentifier:(id)arg3;
- (void)setDataRepresentation:(id)arg1 forIdentifier:(id)arg2;

@end
