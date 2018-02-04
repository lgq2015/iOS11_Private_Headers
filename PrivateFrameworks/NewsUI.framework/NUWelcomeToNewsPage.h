/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUWelcomeToNewsPage : NSObject <NUPage> {
    unsigned long long  _pageNextAction;
    NUPageStyle * _pageStyle;
    <NURouter> * _router;
    NUWelcomeToNewsViewController * _welcomeToNewsViewController;
}

@property (nonatomic, readonly) bool allowNeighboringAdvertising;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) unsigned long long pageNextAction;
@property (nonatomic, retain) NUPageStyle *pageStyle;
@property (nonatomic, readonly) <NURouter> *router;
@property (readonly) Class superclass;
@property (nonatomic, retain) NUWelcomeToNewsViewController *welcomeToNewsViewController;

- (void).cxx_destruct;
- (void)activityProvider:(id /* block */)arg1;
- (bool)allowNeighboringAdvertising;
- (id)identifier;
- (id)initWithRouter:(id)arg1;
- (unsigned long long)pageNextAction;
- (id)pageStyle;
- (void)pageStyling:(id /* block */)arg1;
- (void)prepare;
- (id)router;
- (void)setPageNextAction:(unsigned long long)arg1;
- (void)setPageStyle:(id)arg1;
- (void)setWelcomeToNewsViewController:(id)arg1;
- (void)unprepare;
- (id)viewController;
- (id)welcomeToNewsViewController;

@end
