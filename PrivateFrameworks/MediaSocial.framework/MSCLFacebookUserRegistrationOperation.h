/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLFacebookUserRegistrationOperation : SSVComplexOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    SKUIMediaSocialAuthor * _author;
    id /* block */  _outputBlock;
    NSString * _token;
}

@property (nonatomic, readonly, copy) SKUIMediaSocialAuthor *author;
@property (nonatomic, copy) id /* block */ outputBlock;
@property (nonatomic, readonly, copy) NSString *token;

- (void).cxx_destruct;
- (id)author;
- (id)initWithToken:(id)arg1 forAuthor:(id)arg2;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;
- (id)token;

@end
