/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAccountTokenRegisterOperation : SSVComplexOperation {
    MSCLAccount * _account;
    SKUIMediaSocialAuthor * _author;
    SSVMediaSocialPostExternalDestination * _externalDestination;
    NSLock * _lock;
    id /* block */  _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_componentsWithURL:(id)arg1;
- (id)_queryItems;
- (id)_requestWithURL:(id)arg1;
- (id)initWithAuthor:(id)arg1 externalDestination:(id)arg2 account:(id)arg3;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
