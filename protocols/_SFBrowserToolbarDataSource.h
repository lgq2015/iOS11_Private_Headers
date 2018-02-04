/* made by EzioChiu.
 */

@protocol _SFBrowserToolbarDataSource <NSObject>

@required

- (bool)browserToolbarCanGoBack:(_SFBrowserToolbar *)arg1;
- (bool)browserToolbarCanGoForward:(_SFBrowserToolbar *)arg1;
- (bool)browserToolbarCanOpenPageInSafari:(_SFBrowserToolbar *)arg1;
- (bool)browserToolbarCanShowAction:(_SFBrowserToolbar *)arg1;
- (double)browserToolbarDismissButtonPadding:(_SFBrowserToolbar *)arg1;
- (struct CGSize { double x1; double x2; })browserToolbarDismissButtonSize:(_SFBrowserToolbar *)arg1;
- (bool)browserToolbarShouldShowOpenInSafariBarButtonItem:(_SFBrowserToolbar *)arg1;

@end
