/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface TextLinkButton : UIButton {
    <TextLinkButtonDelegate> * _delegate;
    NSString * _urlString;
}

@property (nonatomic) <TextLinkButtonDelegate> *delegate;
@property (nonatomic, retain) NSString *urlString;

- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUrlString:(id)arg1;
- (void)tapAction:(id)arg1;
- (id)urlString;

@end
