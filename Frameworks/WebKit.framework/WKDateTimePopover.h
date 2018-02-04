/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDateTimePopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    WKContentView * _view;
    struct RetainPtr<WKDateTimePopoverViewController> { 
        void *m_ptr; 
    }  _viewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;
- (id)viewController;

@end
