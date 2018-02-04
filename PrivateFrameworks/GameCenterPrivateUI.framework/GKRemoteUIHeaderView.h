/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRemoteUIHeaderView : UIView <RUIHeader> {
    double  _bottomMargin;
    double  _height;
    bool  _isFirstSection;
    GKLabel * _textLabel;
}

@property (nonatomic) double bottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic) bool isFirstSection;
@property (readonly) Class superclass;
@property (nonatomic, retain) GKLabel *textLabel;

- (double)bottomMargin;
- (void)dealloc;
- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (double)height;
- (id)initWithAttributes:(id)arg1;
- (bool)isFirstSection;
- (void)setBottomMargin:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setIsFirstSection:(bool)arg1;
- (void)setSectionIsFirst:(bool)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
