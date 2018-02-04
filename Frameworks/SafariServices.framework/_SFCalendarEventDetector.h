/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFCalendarEventDetector : NSObject {
    id /* block */  _checkForCalendarEventsBlock;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (void)_checkIfPageContainsCalendarEvent;
- (void)_foundCalendarEvents:(id)arg1;
- (void)cancelCheckForConfirmationPage;
- (void)checkIfPageContainsCalendarEvent;
- (id)initWithWebView:(id)arg1;

@end
