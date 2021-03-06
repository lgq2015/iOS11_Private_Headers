/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SocialServices.framework/SocialServices
 */

@interface SLGoogleAuthController : NSObject {
    SLGoogleWebAuthController * _webAuthController;
}

+ (id)googleAuthControllerWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)googleAuthControllerWithPresentationBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (id)googleAuthControllerWithYouTubeUsername:(id)arg1 presentationBlock:(id /* block */)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;

@end
