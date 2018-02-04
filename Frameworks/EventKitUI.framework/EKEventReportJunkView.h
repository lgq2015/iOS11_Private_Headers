/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventReportJunkView : UIView {
    EKEventDetailsHighlightControl * _control;
    EKEventViewController * _controller;
    bool  _isLargeDayView;
}

@property bool isLargeDayView;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1;
- (bool)isLargeDayView;
- (void)setIsLargeDayView:(bool)arg1;
- (void)tapped:(id)arg1;

@end
