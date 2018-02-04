/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCCachedDirectory : DCCachedItem <DCCachedDirectory>

@property (readonly, retain) NSArray *contents;
@property (readonly, retain) NSArray *localItems;

+ (id)_contentsWithFixedConstantsFromContentsPropertyListData:(id)arg1;

- (id)_contentsFullPath;
- (id)_directoryPath;
- (id)_fileSystemMetadataWithoutNeedingLocking;
- (id)_localGenerationIdentifier;
- (id)_localGenerationIdentifierFullPath;
- (id)_parentContentsMetadataForChildAtRelativePath:(id)arg1;
- (id)contents;
- (bool)isDropBox;
- (id)localItems;

@end
