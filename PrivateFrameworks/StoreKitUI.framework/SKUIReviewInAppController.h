/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewInAppController : NSObject <SKUIComposeReviewDelegate> {
    id /* block */  _completion;
    SKUIComposeReviewViewController * _composeViewController;
    SKUIReviewInAppConfiguration * _configuration;
    SKUIStoreDialogController * _dialogController;
    SKUIReviewInAppRatingViewController * _ratingViewController;
    SKUIProductReviewURLProvider * _reviewURLProvider;
    SKUIStarRatingQueue * _starRatingQueue;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) SKUIComposeReviewViewController *composeViewController;
@property (nonatomic, copy) SKUIReviewInAppConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SKUIStoreDialogController *dialogController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIReviewInAppRatingViewController *ratingViewController;
@property (nonatomic, retain) SKUIProductReviewURLProvider *reviewURLProvider;
@property (nonatomic, retain) SKUIStarRatingQueue *starRatingQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 result:(unsigned long long)arg2;
- (void)_finishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_presentRatingPrompt;
- (void)_presentWriteReview;
- (void)_promptForStarRatingDuringCompose:(id)arg1;
- (void)_submitRating:(long long)arg1 completion:(id /* block */)arg2;
- (id /* block */)completion;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (void)composeReviewViewControllerDidSubmit:(id)arg1;
- (id)composeViewController;
- (id)configuration;
- (id)dialogController;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)ratingViewController;
- (id)reviewURLProvider;
- (void)setCompletion:(id /* block */)arg1;
- (void)setComposeViewController:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDialogController:(id)arg1;
- (void)setRatingViewController:(id)arg1;
- (void)setReviewURLProvider:(id)arg1;
- (void)setStarRatingQueue:(id)arg1;
- (id)starRatingQueue;
- (void)start;

@end
