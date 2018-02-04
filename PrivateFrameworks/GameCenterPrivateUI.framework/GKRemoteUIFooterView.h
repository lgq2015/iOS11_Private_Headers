/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter> {
    double  _bottomMargin;
    int  _layoutStyle;
    double  _leftMargin;
    double  _paragraphMargin;
    double  _rightMargin;
    bool  _shouldApplyGameCenterTheme;
    GKLabel * _textLabel;
}

@property (nonatomic) double bottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int layoutStyle;
@property (nonatomic) double leftMargin;
@property (nonatomic) double paragraphMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) bool shouldApplyGameCenterTheme;
@property (readonly) Class superclass;
@property (nonatomic, retain) GKLabel *textLabel;

- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;
- (double)bottomMargin;
- (void)dealloc;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (int)layoutStyle;
- (double)leftMargin;
- (double)paragraphMargin;
- (double)rightMargin;
- (void)setBottomMargin:(double)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setParagraphMargin:(double)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setShouldApplyGameCenterTheme:(bool)arg1;
- (void)setTextLabel:(id)arg1;
- (bool)shouldApplyGameCenterTheme;
- (id)textLabel;

@end
