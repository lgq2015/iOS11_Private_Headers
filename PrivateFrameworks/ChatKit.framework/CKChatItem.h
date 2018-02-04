/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatItem : NSObject {
    BBBulletin * _bulletin;
    IMTranscriptChatItem * _imChatItem;
    double  _maxWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _sizeLoaded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textAlignmentInsets;
    NSAttributedString * _transcriptDrawerText;
    NSAttributedString * _transcriptText;
    bool  _zOrder;
}

@property (nonatomic, retain) IMTranscriptChatItem *IMChatItem;
@property (nonatomic, readonly) unsigned char attachmentContiguousType;
@property (nonatomic, readonly) struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; bool x7; bool x8; bool x9; } balloonDescriptor;
@property (nonatomic, retain) BBBulletin *bulletin;
@property (nonatomic, readonly) bool canAttachStickers;
@property (nonatomic, readonly) bool canCopy;
@property (nonatomic, readonly) bool canDelete;
@property (nonatomic, readonly) bool canExport;
@property (nonatomic, readonly) bool canForward;
@property (nonatomic, readonly) bool canSendAsTextMessage;
@property (nonatomic, readonly) Class cellClass;
@property (nonatomic, readonly, copy) NSString *cellIdentifier;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) unsigned char contiguousType;
@property (nonatomic, readonly) bool displayDuringSend;
@property (nonatomic, readonly) bool hasTail;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic) double maxWidth;
@property (nonatomic, readonly, copy) NSString *menuTitle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (getter=isSizeLoaded, nonatomic) bool sizeLoaded;
@property (nonatomic, readonly) bool stickersSnapToPoint;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textAlignmentInsets;
@property (nonatomic, copy) NSAttributedString *transcriptDrawerText;
@property (nonatomic, readonly) BOOL transcriptOrientation;
@property (nonatomic, copy) NSAttributedString *transcriptText;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } transcriptTextAlignmentInsets;
@property (nonatomic, readonly) bool wantsDrawerLayout;
@property (nonatomic, readonly) bool zOrder;

+ (id)chatItemWithBulletin:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3;
+ (id)chatItemWithIMChatItem:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3;

- (void).cxx_destruct;
- (id)IMChatItem;
- (void)_setSizeForTesting:(struct CGSize { double x1; double x2; })arg1;
- (unsigned char)attachmentContiguousType;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; bool x7; bool x8; bool x9; })balloonDescriptor;
- (id)bulletin;
- (bool)canAttachStickers;
- (bool)canCopy;
- (bool)canDelete;
- (bool)canExport;
- (bool)canForward;
- (bool)canSave;
- (bool)canSendAsTextMessage;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)contact;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (unsigned char)contiguousType;
- (id)description;
- (bool)displayDuringSend;
- (bool)hasTail;
- (id)initWithBulletin:(id)arg1 maxWidth:(double)arg2;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (bool)isSizeLoaded;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (id)loadTranscriptText;
- (double)maxWidth;
- (id)menuTitle;
- (void)setBulletin:(id)arg1;
- (void)setIMChatItem:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setSizeLoaded:(bool)arg1;
- (void)setTranscriptDrawerText:(id)arg1;
- (void)setTranscriptText:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)stickersSnapToPoint;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textAlignmentInsets;
- (id)transcriptDrawerText;
- (BOOL)transcriptOrientation;
- (id)transcriptText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptTextAlignmentInsets;
- (void)unloadSize;
- (void)unloadTranscriptText;
- (id)visibleAssociatedMessageChatItems;
- (bool)wantsDrawerLayout;
- (bool)zOrder;

@end
