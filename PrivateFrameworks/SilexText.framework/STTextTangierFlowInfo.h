/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextTangierFlowInfo : NSObject <STTangierRepDirectLayerHostingInfo, TSDContainerInfo> {
    <TSDRepDirectLayerHosting> * _directLayerHost;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    STTextTangierFlowStorage * _storage;
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
@property (nonatomic) <TSDRepDirectLayerHosting> *directLayerHost;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) STTextTangierFlowStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)anchoredToText;
- (bool)attachedToBodyText;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)directLayerHost;
- (bool)floatingAboveText;
- (id)geometry;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
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
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (Class)repClass;
- (void)setDirectLayerHost:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (id)storage;

@end
