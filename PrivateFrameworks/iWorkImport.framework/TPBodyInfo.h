/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBodyInfo : NSObject <TSDContainerInfo> {
    TPPageInfo * _pageInfo;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, readonly) TSWPStorage *bodyStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, readonly) bool layoutVertically;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic, readonly) <TSDHint> *nextTargetFirstChildHint;
@property (nonatomic, readonly) <TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (nonatomic, readonly) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumbers;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic, readonly) TPPageHint *pageHint;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, readonly) <TSWPOffscreenColumn> *previousTargetLastColumn;
@property (nonatomic, readonly) NSObject<TSWPTopicNumberHints> *previousTargetTopicNumbers;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (readonly) Class superclass;

- (id)bodyStorage;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)geometry;
- (void)inflateBodyLayout:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isSelectable;
- (bool)isThemeContent;
- (Class)layoutClass;
- (bool)layoutVertically;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (id)nextTargetTopicNumbers;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)pageHint;
- (id)parentInfo;
- (id)previousTargetLastColumn;
- (id)previousTargetTopicNumbers;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
- (id)storage;

@end
