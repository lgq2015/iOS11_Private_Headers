/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFWebProcessPlugInCertificateWarningController : NSObject <WBSCertificateWarningPagePresenter> {
    <WBSCertificateWarningPageHandler> * _certificateWarningPageHandlerProxy;
    _WKRemoteObjectInterface * _certificateWarningPagePresenterInterface;
    _SFWebProcessPlugInPageController * _pageController;
    WBSCertificateWarningPageContext * _warningPageContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_certificateWarningPageHandlerProxy;
- (void)_clearCertificateWarningPagePresenterInterface;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (void)certificateWarningPageLoaded;
- (void)dealloc;
- (void)goBackSelected;
- (id)initWithPageController:(id)arg1;
- (void)injectCertificateWarningBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (void)openClockSettings;
- (void)prepareCertificateWarningPage:(id)arg1;
- (void)showCertificateInformation;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;

@end
