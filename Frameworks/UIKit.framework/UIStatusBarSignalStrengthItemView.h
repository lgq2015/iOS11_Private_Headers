/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {
    bool  _enableRSSI;
    bool  _showRSSI;
    int  _signalStrengthBars;
    int  _signalStrengthRaw;
}

- (id)_signalStrengthBarsImageName;
- (id)_stringForRSSI;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
