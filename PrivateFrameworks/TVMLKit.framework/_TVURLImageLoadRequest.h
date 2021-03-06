/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVURLImageLoadRequest : ISURLOperation {
    id /* block */  _completionHandler;
    <TVImageDecrypter> * _decrypter;
    NSURL * _url;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, retain) <TVImageDecrypter> *decrypter;
@property (nonatomic, readonly, retain) NSURL *url;

+ (bool)_usePrivateCookieStore;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)decrypter;
- (id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)url;

@end
