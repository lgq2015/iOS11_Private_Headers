/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNode : TSPObject <TSCEResolverContainer, TSKDocumentObject, TSKModel, TSKSearchTarget> {
    unsigned long long  _buildEventCount;
    bool  _buildEventCountIsUpToDate;
    NSArray * _children;
    NSString * _classicUniqueID;
    bool  _collapsed;
    bool  _collapsedInOutlineView;
    unsigned long long  _depth;
    NSSet * _digestsForDatasThatNeedDownloadForThumbnail;
    bool  _hasBodyInOutlineView;
    bool  _hasExplicitBuilds;
    bool  _hasExplicitBuildsIsUpToDate;
    bool  _hasNote;
    bool  _hasTransition;
    bool  _hidden;
    NSString * _previousIdentifier;
    NSMutableSet * _remappedTableNames;
    bool  _slideNumberVisible;
    TSPLazyReference * _slideReference;
    NSMutableDictionary * _slideSpecificHyperlinkMap;
    unsigned long long  _slideSpecificHyperlinksCount;
    KNSlideTree * _slideTree;
    unsigned int  _tableNameCounter;
    NSMutableDictionary * _thumbnails;
    bool  _thumbnailsAreDirty;
    NSString * mPreviousIdentifier;
}

@property (nonatomic, readonly) unsigned long long buildEventCount;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, retain) NSString *classicUniqueID;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedInOutlineView, nonatomic) bool collapsedInOutlineView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long depth;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *digestsForDatasThatNeedDownloadForThumbnail;
@property (nonatomic) bool hasBodyInOutlineView;
@property (nonatomic, readonly) bool hasBuildEvents;
@property (nonatomic, readonly) bool hasChildren;
@property (nonatomic, readonly) bool hasExplicitBuilds;
@property (nonatomic) bool hasNote;
@property (nonatomic) bool hasTransition;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) bool isSlideNumberVisible;
@property (nonatomic, readonly) KNSlideNode *next;
@property (nonatomic, readonly) KNSlideNode *nextSkippingCollapsed;
@property (nonatomic, readonly) KNSlideNode *nextSkippingHidden;
@property (nonatomic, readonly) KNSlideNode *previous;
@property (nonatomic, retain) NSString *previousIdentifier;
@property (nonatomic, readonly) KNSlideNode *previousSkippingCollapsed;
@property (nonatomic, readonly) KNSlideNode *previousSkippingHidden;
@property (nonatomic, retain) KNAbstractSlide *slide;
@property (nonatomic, readonly) KNAbstractSlide *slideIfLoaded;
@property (nonatomic, readonly) NSDictionary *slideSpecificHyperlinkMap;
@property (nonatomic) KNSlideTree *slideTree;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *thumbnails;
@property (nonatomic) bool thumbnailsAreDirty;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)UUIDStringSetForSlideNodes:(id)arg1;
+ (bool)needsObjectUUID;
+ (id)parentSlideNodeForInfo:(id)arg1;
+ (id)slideNodeForSelectionPath:(id)arg1;
+ (id)slideNodeUUIDForObsoleteUniqueIDString:(id)arg1 inSlideNodes:(id)arg2;

- (void).cxx_destruct;
- (void)addHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)addHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)addHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)addOldModelDescendantsToSlideTree:(id)arg1;
- (void)addRemappedTableName:(id)arg1;
- (void)addThumbnail:(id)arg1 atSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)buildEventCount;
- (id)childEnumerator;
- (id)childSearchTargets;
- (id)children;
- (id)classicUniqueID;
- (void)cleanOutInvalidSlideSpecificInfoEntries;
- (void)clearRemappedTableNames;
- (void)clearSlideSpecificLinkMap;
- (void)dealloc;
- (unsigned long long)depth;
- (id)descendants;
- (id)descendantsOmittingSkippedSlideNodes:(bool)arg1 omittingCollapsedSlideNodes:(bool)arg2;
- (void)didLoadSlide:(id)arg1;
- (id)digestsForDatasThatNeedDownloadForThumbnail;
- (bool)hasBodyInOutlineView;
- (bool)hasBuildEvents;
- (bool)hasChildren;
- (bool)hasExplicitBuilds;
- (bool)hasNote;
- (bool)hasSlideSpecificHyperlinkToNode:(id)arg1;
- (bool)hasSlideSpecificHyperlinks;
- (bool)hasTransition;
- (id)initWithContext:(id)arg1;
- (void)invalidateBuildEventCountCaches;
- (bool)isCollapsed;
- (bool)isCollapsedInOutlineView;
- (bool)isHidden;
- (bool)isSlideNumberVisible;
- (void)loadFromArchive:(const struct SlideNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; struct RepeatedPtrField<TSP::DataReference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Size> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; unsigned int x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; unsigned int x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x20; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x21; unsigned int x22; bool x23; bool x24; bool x25; bool x26; struct RepeatedPtrField<KN::SlideNodeArchive_SlideSpecificHyperlinkMapEntry> { void **x_27_1_1; int x_27_1_2; int x_27_1_3; int x_27_1_4; } x27; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)next;
- (id)nextSkippingCollapsed;
- (id)nextSkippingHidden;
- (unsigned int)nextUntitledResolverIndex;
- (unsigned long long)numberOfLinksToSlideNodeInStorage:(id)arg1 forSlideNodeUUIDString:(id)arg2;
- (void)p_addHyperlinkForObjectReferencedByMapping:(id)arg1 toSlideNode:(id)arg2;
- (void)p_addOldModelDescendantsToSlideTree:(id)arg1 atDepth:(unsigned long long)arg2;
- (unsigned long long)p_buildEventCount;
- (void)p_commonInit;
- (id)p_getSlideSpecificMappingForStorage:(id)arg1 forSlideNode:(id)arg2;
- (id)p_mappingFromString:(id)arg1;
- (void)p_removeHyperlinkForObjectReferencedByMapping:(id)arg1 toSlideNode:(id)arg2;
- (id)p_slideNodeWithUUIDString:(id)arg1 inSlideNodes:(id)arg2;
- (void)p_updateHasExplicitBuilds;
- (id)previous;
- (id)previousIdentifier;
- (id)previousSkippingCollapsed;
- (id)previousSkippingHidden;
- (void)purgeU15ModelIfNeeded;
- (id)remappedTableNames;
- (void)removeAllThumbnails;
- (void)removeHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)removeHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)removeHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)removeInvalidSlideSpecificHyperlinksForStorage:(id)arg1 withSlideNodeUUIDStrings:(id)arg2;
- (void)removeInvalidSlideSpecificHyperlinksWithSlideNodeUUIDStrings:(id)arg1;
- (void)removeObsoleteFieldsFor20Upgrade;
- (void)removeSlideSpecificMappingsFromDrawablesInGroup:(id)arg1;
- (void)removeThumbnailAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)resolverMatchingName:(id)arg1;
- (bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned long long)safeBuildEventCount;
- (bool)safeHasBuildEvents;
- (unsigned int)saveNextUntitledResolverIndex;
- (void)saveToArchive:(struct SlideNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; struct RepeatedPtrField<TSP::DataReference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Size> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; unsigned int x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; unsigned int x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x20; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x21; unsigned int x22; bool x23; bool x24; bool x25; bool x26; struct RepeatedPtrField<KN::SlideNodeArchive_SlideSpecificHyperlinkMapEntry> { void **x_27_1_1; int x_27_1_2; int x_27_1_3; int x_27_1_4; } x27; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setClassicUniqueID:(id)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setCollapsedInOutlineView:(bool)arg1;
- (void)setDepth:(unsigned long long)arg1;
- (void)setDigestsForDatasThatNeedDownloadForThumbnail:(id)arg1;
- (void)setHasBodyInOutlineView:(bool)arg1;
- (void)setHasNote:(bool)arg1;
- (void)setHasTransition:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsSlideNumberVisible:(bool)arg1;
- (void)setPreviousIdentifier:(id)arg1;
- (void)setSlide:(id)arg1;
- (void)setSlideTree:(id)arg1;
- (void)setThumbnailsAreDirty:(bool)arg1;
- (id)slide;
- (id)slideIfLoaded;
- (id)slideSpecificHyperlinkMap;
- (id)slideTree;
- (id)thumbnails;
- (bool)thumbnailsAreDirty;
- (id)uniqueIdentifier;
- (void)uniquifyTableNamesForUpgradeOrImport;
- (void)upgradeSlideSpecificHyperlinksForSlideNodes:(id)arg1;
- (void)upgradeSlideSpecificStorageHyperlinksForStorage:(id)arg1 withSlideNodes:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
