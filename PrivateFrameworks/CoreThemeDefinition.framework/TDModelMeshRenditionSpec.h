/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (nonatomic, retain) MDLMesh *mesh;
@property (nonatomic, retain) NSOrderedSet *submeshes;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

@end
