/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STStandaloneTextInfo : NSObject <TSDContainerInfo> {
    STTextTangierStorage * _storage;
    bool  anchoredToText;
    bool  attachedToBodyText;
    bool  floatingAboveText;
    TSDInfoGeometry * geometry;
    bool  inlineWithText;
    TSPObject<TSDOwningAttachment> * owningAttachment;
    NSObject<TSDContainerInfo> * parentInfo;
}

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
@property (nonatomic, readonly) STTextTangierStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)anchoredToText;
- (bool)attachedToBodyText;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (bool)floatingAboveText;
- (id)geometry;
- (id)initWithStorage:(id)arg1;
- (bool)inlineWithText;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isThemeContent;
- (Class)layoutClass;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)parentInfo;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (id)storage;

@end