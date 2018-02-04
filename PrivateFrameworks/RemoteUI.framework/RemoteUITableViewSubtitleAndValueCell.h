/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {
    UILabel * _valueLabel;
}

- (void).cxx_destruct;
- (void)_adjustFrameOfView:(id)arg1 distance:(double)arg2;
- (id)effectiveDetailTextLabel;
- (id)effectiveValueTextLabel;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)valueLabel;

@end
