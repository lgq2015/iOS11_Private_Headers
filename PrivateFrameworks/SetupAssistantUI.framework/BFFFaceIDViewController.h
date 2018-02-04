/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFaceIDViewController : BFFSplashController <PSPearlEnrollControllerDelegate> {
    bool  _completesOnCancel;
    <BFFFaceIDViewControllerDelegate> * _faceIDViewControllerDelegate;
    UIImageView * _splashImageView;
}

@property (nonatomic) bool completesOnCancel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <BFFFaceIDViewControllerDelegate> *faceIDViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)performExtendedInitializationWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_createSplashImageView;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (void)_userDidTapCancelButton:(id)arg1;
- (bool)completesOnCancel;
- (id)faceIDViewControllerDelegate;
- (id)init;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (void)resetColorsAnimated:(bool)arg1;
- (void)setCompletesOnCancel:(bool)arg1;
- (void)setFaceIDViewControllerDelegate:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willStartOver;

@end