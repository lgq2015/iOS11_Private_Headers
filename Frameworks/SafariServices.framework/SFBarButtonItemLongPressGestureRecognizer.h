/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer {
    SEL  _longPressAction;
    id  _longPressTarget;
}

+ (id)gestureRecognizerWithLongPressTarget:(id)arg1 action:(SEL)arg2;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1;
- (void)longPress:(id)arg1;

@end
