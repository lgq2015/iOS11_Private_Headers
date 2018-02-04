/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate> {
    NSString * _URLString;
    double  _URLWidth;
    UIWebBrowserView * _browserView;
    UIPrintFormatter * _contentFormatter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    NSString * _dateString;
    double  _dateWidth;
    UIColor * _footerColor;
    UIFont * _footerFont;
    struct CGPoint { 
        double x; 
        double y; 
    }  _footerOffset;
    NSNumberFormatter * _numberFormatter;
    UIWebPaginationInfo * _paginationInfo;
    UIViewController * _parentViewController;
    bool  _printFooter;
    double  _printWidth;
    WebFrame * _webFrame;
}

@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, retain) UIWebBrowserView *browserView;
@property (nonatomic, retain) UIPrintFormatter *contentFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic) bool printFooter;
@property (readonly) Class superclass;
@property (nonatomic, retain) WebFrame *webFrame;

- (void).cxx_destruct;
- (id)URLString;
- (void)associateWithPrintController:(id)arg1;
- (id)browserView;
- (id)contentFormatter;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)init;
- (id)parentViewController;
- (id)printControllerWithPageTitle:(id)arg1;
- (bool)printFooter;
- (id)printInfoWithPageTitle:(id)arg1;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)printInteractionControllerWillStartJob:(id)arg1;
- (id)printingFrame;
- (void)setBrowserView:(id)arg1;
- (void)setContentFormatter:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPrintFooter:(bool)arg1;
- (void)setURLString:(id)arg1;
- (void)setWebFrame:(id)arg1;
- (id)webFrame;

@end
