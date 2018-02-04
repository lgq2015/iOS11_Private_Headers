/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlide : KNAbstractSlide <TSKModel, TSKTransformableObject> {
    NSMutableSet * _infosUsingObjectPlaceholderGeometry;
    KNMasterSlide * _master;
    KNNoteInfo * _note;
}

@property (nonatomic, readonly) bool areInfosUsingObjectPlaceholderGeometry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *infosUsingObjectPlaceholderGeometry;
@property (nonatomic, retain) KNMasterSlide *master;
@property (nonatomic, retain) KNNoteInfo *note;
@property (nonatomic, readonly) bool slideObjectsLayerWithMaster;
@property (readonly) Class superclass;

+ (id)blankSlideWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)addInfoUsingObjectPlaceholderGeometry:(id)arg1;
- (void)addMapForStorage:(id)arg1 forHyperlink:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)areInfosUsingObjectPlaceholderGeometry;
- (id)childEnumerator;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (id)infoCorrespondingToMasterInfo:(id)arg1;
- (id)infosToDisplay;
- (id)infosUsingObjectPlaceholderGeometry;
- (id)initWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;
- (void)insertDrawables:(id)arg1 atIndex:(unsigned long long)arg2 dolcContext:(id)arg3;
- (bool)isComponentRoot;
- (bool)isMasterSlide;
- (bool)isNoteSelectionPath:(id)arg1;
- (void)loadFromArchive:(const struct SlideArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Reference {} *x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<KN::BuildChunkArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct TransitionArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)master;
- (id)note;
- (void)p_checkMaster;
- (bool)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)arg1;
- (id)p_slideNodeUUIDStringFromURL:(id)arg1;
- (bool)p_urlIsSlideSpecific:(id)arg1;
- (id)packageLocator;
- (void)removeDrawable:(id)arg1;
- (void)removeInfoUsingObjectPlaceholderGeometry:(id)arg1;
- (void)removeMapForStorage:(id)arg1 forHyperlink:(id)arg2;
- (void)saveToArchive:(struct SlideArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Reference {} *x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<KN::BuildChunkArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct TransitionArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setInfosUsingObjectPlaceholderGeometry:(id)arg1;
- (void)setMaster:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setToMaster:(id)arg1;
- (bool)slideObjectsLayerWithMaster;
- (void)updateSlideSpecificHyperlinkMapForStorage:(id)arg1 oldHyperlink:(id)arg2 newHyperlink:(id)arg3;
- (void)updateSlideSpecificLinkMapForInfo:(id)arg1 newHyperlink:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
