/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFWebUIDialog : _SFDialog {
    WebUIAlert * _alert;
    id /* block */  _completionHandler;
    int  _finalAction;
}

@property (nonatomic, readonly) WebUIAlert *alert;

- (void).cxx_destruct;
- (id)alert;
- (void)didCompleteWithResponse:(id)arg1;
- (id)initWithAlert:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newViewControllerRepresentationWithCompletionHandler:(id /* block */)arg1;
- (long long)presentationStyle;

@end
