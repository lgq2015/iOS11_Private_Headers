/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DCDocumentAttributesShareSheetPlugIn : NSObject <UIShareUIAccessoryPlugIn> {
    NSArray * _URLs;
    <UIShareUIAccessoryHosting> * _host;
    UIViewController<UIShareUIAccessoryPresenting> * _inlineAccessoryViewController;
}

@property (nonatomic, readonly) NSArray *URLs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <UIShareUIAccessoryHosting> *host;
@property (nonatomic, readonly) UIViewController<UIShareUIAccessoryPresenting> *inlineAccessoryViewController;
@property (readonly) Class superclass;

+ (id)shareSheetPlugInWithPresentingHost:(id)arg1 URLs:(id)arg2;

- (void).cxx_destruct;
- (id)URLs;
- (void)commitPendingChanges;
- (id)host;
- (id)initWithPresentingHost:(id)arg1 URLs:(id)arg2 itemLoader:(id)arg3;
- (id)inlineAccessoryViewController;

@end