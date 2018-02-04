/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsCell : UITableViewCell {
    UIView * _bottomSeperator;
    bool  _indentBottomSeperator;
    bool  _indentTopSeperator;
    UIView * _topSeperator;
}

@property (nonatomic, retain) UIView *bottomSeperator;
@property (nonatomic) bool indentBottomSeperator;
@property (nonatomic) bool indentTopSeperator;
@property (nonatomic, retain) UIView *topSeperator;

- (void).cxx_destruct;
- (id)bottomSeperator;
- (bool)indentBottomSeperator;
- (bool)indentTopSeperator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBottomSeperator:(id)arg1;
- (void)setIndentBottomSeperator:(bool)arg1;
- (void)setIndentTopSeperator:(bool)arg1;
- (void)setTopSeperator:(id)arg1;
- (id)topSeperator;

@end
