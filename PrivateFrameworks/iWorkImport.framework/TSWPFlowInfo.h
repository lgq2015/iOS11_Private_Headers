/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFlowInfo : TSPObject <TSDContainerInfo, TSDSelectionStatisticsContributor, TSWPFlowInfo, TSWPStorageParent> {
    TSWPStorage * _textStorage;
    NSArray * _textboxes;
    unsigned long long  _userInterfaceIdentifier;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, readonly) long long contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSWPStorage *textStorage;
@property (nonatomic, retain) NSArray *textboxes;
@property (nonatomic, readonly) TSUColor *userInterfaceFillColor;
@property (nonatomic) unsigned long long userInterfaceIdentifier;
@property (nonatomic, readonly) TSUColor *userInterfaceStrokeColor;

+ (id)fillColorForUserInterfaceIdentifier:(unsigned long long)arg1;
+ (bool)needsObjectUUID;
+ (id)p_colorForIndex:(unsigned long long)arg1;
+ (id)p_darkColorForColor:(id)arg1;
+ (id)p_darkColorForIndex:(unsigned long long)arg1;
+ (id)strokeColorForUserInterfaceIdentifier:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)autoListRecognition;
- (bool)autoListTermination;
- (id)childEnumerator;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (long long)contentWritingDirection;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)displayNameOfMaxLength:(unsigned long long)arg1 usesEllipsis:(bool)arg2;
- (id)extractTextStorage;
- (id)geometry;
- (void)i_uncheckedSetTextboxes:(id)arg1;
- (unsigned long long)indexOfTextBox:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)initWithStorage:(id)arg1 context:(id)arg2;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isLocked;
- (bool)isSelectable;
- (bool)isThemeContent;
- (Class)layoutClass;
- (void)loadFromFlowInfoArchive:(const struct FlowInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objectUUIDPath;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (void)pSaveToFlowInfoArchive:(struct FlowInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned int x7; }*)arg1 archiver:(id)arg2 textBoxes:(id)arg3;
- (id)parentInfo;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (Class)repClass;
- (void)saveToArchiver:(id)arg1;
- (void)saveWithOnlyLinkedTextBoxes:(id)arg1 archiver:(id)arg2;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (void)setTextboxes:(id)arg1;
- (void)setUserInterfaceIdentifier:(unsigned long long)arg1;
- (bool)textIsLinked;
- (bool)textIsVertical;
- (id)textStorage;
- (id)textboxes;
- (id)userInterfaceFillColor;
- (unsigned long long)userInterfaceIdentifier;
- (id)userInterfaceStrokeColor;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
