/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextParentInfo : NSObject <TSDInfo>

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;

- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)geometry;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isSelectable;
- (bool)isThemeContent;
- (Class)layoutClass;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)parentInfo;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;

@end
