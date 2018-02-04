/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate> {
    bool  _allowCalloutActions;
    BOOL  _balloonColor;
    NSMutableDictionary * _composeImages;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    NSMutableDictionary * _mediaObjects;
    CKComposition * _pasteboardComposition;
    NSMutableDictionary * _pluginDisplayContainers;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) bool allowCalloutActions;
@property (nonatomic) BOOL balloonColor;
@property (nonatomic, retain) NSMutableDictionary *composeImages;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKMessageEntryRichTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) NSMutableDictionary *mediaObjects;
@property (nonatomic, retain) CKComposition *pasteboardComposition;
@property (nonatomic, retain) NSMutableDictionary *pluginDisplayContainers;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)_showCustomInputView;
- (bool)allowCalloutActions;
- (id)attributedTextForCompositionText:(id)arg1;
- (BOOL)balloonColor;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)composeImageForTransferGUID:(id)arg1;
- (id)composeImages;
- (id)compositionText;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePastedString:(id)arg1 toRange:(id)arg2;
- (void)handleTapOrLongPress:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)longPressGestureRecognizer;
- (id)mediaObjects;
- (void)paste:(id)arg1;
- (id)pasteConfiguration;
- (id)pasteboardComposition;
- (id)pluginDisplayContainers;
- (void)previewDidChange:(id)arg1;
- (void)setAllowCalloutActions:(bool)arg1;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setComposeImages:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setPasteboardComposition:(id)arg1;
- (void)setPluginDisplayContainers:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)updateComposeImages;

@end
