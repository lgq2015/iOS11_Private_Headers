/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface ExifMetadataExtractor : NSObject {
    NSDictionary * allMetadata;
    NSDictionary * desiredAppleMakerKeyPairs;
    NSMutableArray * desiredExifKeysArray;
    NSMutableArray * facesArray;
    bool  hadAllRequestedKeys;
    NSURL * inFileURL;
    NSMutableDictionary * metadataDictionary;
    bool  saveAllMetadata;
}

@property (readonly) NSDictionary *allMetadata;
@property (retain) NSMutableArray *desiredExifKeysArray;
@property (readonly) NSMutableArray *facesArray;
@property (readonly) bool hadAllRequestedKeys;
@property (retain) NSURL *inFileURL;
@property (readonly) NSMutableDictionary *metadataDictionary;
@property bool saveAllMetadata;

- (void).cxx_destruct;
- (void)CopyFacesDataFromAuxDictionary:(id)arg1 toArray:(id)arg2;
- (bool)CopyFromMakerMediaDict:(id)arg1 toDict:(id)arg2;
- (id)allMetadata;
- (bool)copyKeysFromDictionary:(id)arg1;
- (id)desiredExifKeysArray;
- (id)facesArray;
- (bool)hadAllRequestedKeys;
- (id)inFileURL;
- (id)init;
- (bool)keyIsDesired:(id)arg1;
- (id)metadataDictionary;
- (void)performCorrectionsOnDictionary:(id)arg1;
- (short)processFile;
- (bool)saveAllMetadata;
- (void)setDesiredExifKeysArray:(id)arg1;
- (void)setInFileURL:(id)arg1;
- (void)setSaveAllMetadata:(bool)arg1;

@end
