/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPShapeInfo : TSDShapeInfo <TSDContainerInfo, TSDSelectionStatisticsContributor, TSWPStorageParent> {
    TSWPStorage * _containedStorage;
    bool  _textUserEditable;
    TSWPLineHintCollection * mLineHints;
}

@property (nonatomic) bool allowsLastLineTruncation;
@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, retain) TSWPColumns *columns;
@property (nonatomic, retain) TSWPStorage *containedStorage;
@property (nonatomic) long long contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool displaysInstructionalText;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, readonly) NSString *instructionalText;
@property (nonatomic, retain) TSWPLineHintCollection *lineHints;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) unsigned int maxLineCount;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic, retain) TSWPPadding *padding;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) bool shrinkTextToFit;
@property (readonly) Class superclass;
@property (nonatomic) bool textIsVertical;
@property (getter=isTextUserEditable, nonatomic) bool textUserEditable;
@property (nonatomic, readonly) TSWPShapeStyle *tswpShapeStyle;
@property (nonatomic) unsigned int verticalAlignment;

+ (void)setDefaultInstructionalText:(id)arg1;

- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)allowsLastLineTruncation;
- (bool)autoListRecognition;
- (bool)autoListTermination;
- (struct CGPoint { double x1; double x2; })autosizePositionOffset;
- (struct CGPoint { double x1; double x2; })autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)childEnumerator;
- (id)childInfos;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (id)columns;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)containedStorage;
- (long long)contentWritingDirection;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (bool)displaysInstructionalText;
- (Class)editorClass;
- (void)fixPositionOfImportedAutosizedShape;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (id)instructionalText;
- (bool)isTextUserEditable;
- (Class)layoutClass;
- (id)lineHints;
- (unsigned int)maxLineCount;
- (double)pOffsetForParagraphAlignment:(struct CGSize { double x1; double x2; })arg1;
- (double)pOffsetForVerticalAlignment:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)p_chunkCountForByBullet;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (bool)p_hasContentForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)p_hasListLabelOrContentForParagraphIndex:(unsigned long long)arg1;
- (id)padding;
- (id)presetKind;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)propertyMapForNewPreset;
- (Class)repClass;
- (void)setAllowsLastLineTruncation:(bool)arg1;
- (void)setColumns:(id)arg1;
- (void)setContainedStorage:(id)arg1;
- (void)setContentWritingDirection:(long long)arg1;
- (void)setLineHints:(id)arg1;
- (void)setMaxLineCount:(unsigned int)arg1;
- (void)setPadding:(id)arg1;
- (void)setShrinkTextToFit:(bool)arg1;
- (void)setTextIsVertical:(bool)arg1;
- (void)setTextUserEditable:(bool)arg1;
- (void)setVerticalAlignment:(unsigned int)arg1;
- (bool)shrinkTextToFit;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)stylesForCopyStyle;
- (bool)supportsShrinkTextToFit;
- (bool)supportsTextInset;
- (bool)textIsVertical;
- (id)textureDeliveryStylesLocalized:(bool)arg1 animationFilter:(id)arg2;
- (struct CGPoint { double x1; double x2; })transformableObjectAnchorPoint;
- (id)tswpShapeStyle;
- (unsigned int)verticalAlignment;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end