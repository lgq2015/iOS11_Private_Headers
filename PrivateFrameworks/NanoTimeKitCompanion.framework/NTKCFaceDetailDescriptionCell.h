/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell {
    UITextView * _textView;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UITextView *textView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (id)init;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setText:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)text;
- (id)textView;

@end
