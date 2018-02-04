/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKEmojiableVibrantLabel : TLKVibrantLabel {
    TLKVibrantLabel * _overlayVibrantLabel;
}

@property (retain) TLKVibrantLabel *overlayVibrantLabel;

- (void).cxx_destruct;
- (id)emojiLabelString;
- (void)layoutSubviews;
- (id)nonEmojiLabelString;
- (id)overlayVibrantLabel;
- (void)setOverlayVibrantLabel:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)updateWithRichText:(id)arg1;

@end
