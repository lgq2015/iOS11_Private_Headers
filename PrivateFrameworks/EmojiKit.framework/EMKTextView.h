/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
 */

@interface EMKTextView : UITextView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _displayRect;
    bool  _emojiConversionActive;
    EMFEmojiPreferences * _emojiPreferences;
    EMKGestureRecognizerDelegate * _gestureRecognizerDelegate;
    EMKOverlayView * _overlayView;
    unsigned long long  _tappedGlyphIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tappedGlyphRange;
    NSTimer * _timer;
}

@property (getter=isEmojiConversionEnabled) bool emojiConversionEnabled;

- (void).cxx_destruct;
- (bool)_shouldSuppressSelectionCommands;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorRect;
- (void)calculateDisplayRect;
- (void)dealloc;
- (void)deleteBackward;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dismissOverlayView;
- (void)emojifyingDisabled:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (bool)isEmojiConversionEnabled;
- (void)keyboardDidShow:(id)arg1;
- (void)layoutSubviews;
- (id)personalizedEmojiTokenListForList:(id)arg1;
- (void)replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withEmojiToken:(id)arg2 language:(id)arg3;
- (void)setDelayFrames:(unsigned long long)arg1;
- (void)setEmojiConversionEnabled:(bool)arg1;
- (void)setEmojiConversionLanguagesAndActivateConversion:(bool)arg1;
- (void)setEmojiConversionLanguagesForInputModeChange:(id)arg1;
- (void)setEmojiConversionLanguagesForKeyboardShow:(id)arg1;
- (void)setPostFrames:(unsigned long long)arg1;
- (void)setPreFrames:(unsigned long long)arg1;
- (void)startTimer:(id)arg1;
- (void)stopTimer:(id)arg1;
- (void)textTapGestureRecognized:(id)arg1;
- (bool)touchHasEmojiSignificance:(id)arg1;
- (void)updateEmojiDisplay:(id)arg1;
- (void)updateOverlayView:(id)arg1;

@end
