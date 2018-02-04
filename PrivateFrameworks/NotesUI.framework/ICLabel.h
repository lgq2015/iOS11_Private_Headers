/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICLabel : UILabel {
    NSAttributedString * _attributedString;
    double  _lineHeight;
    double  _paragraphSpacing;
    double  _spacing;
    NSString * _string;
}

@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic) double lineHeight;
@property (nonatomic) double paragraphSpacing;
@property (nonatomic) double spacing;
@property (nonatomic, copy) NSString *string;

- (void).cxx_destruct;
- (id)attributedString;
- (double)lineHeight;
- (double)paragraphSpacing;
- (void)setAttributedString:(id)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setParagraphSpacing:(double)arg1;
- (void)setSpacing:(double)arg1;
- (void)setString:(id)arg1;
- (double)spacing;
- (id)string;
- (void)updateText;

@end
