/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedAssetContainerList : NSObject <PLAssetContainerList> {
    NSOrderedSet * _sectionInfos;
    NSString * _transientIdentifier;
}

@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOrderedSet *sectionInfos;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transientIdentifier;

- (void).cxx_destruct;
- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (unsigned long long)hash;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)sectionInfos;
- (void)setSectionInfos:(id)arg1;
- (id)transientIdentifier;

@end
