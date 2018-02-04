/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLFacebookPageUpdateOperation : SSVComplexOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    SKUIMediaSocialAuthor * _author;
    id /* block */  _outputBlock;
    NSString * _pageIdentifier;
}

@property (nonatomic, readonly, copy) SKUIMediaSocialAuthor *author;
@property (nonatomic, copy) id /* block */ outputBlock;
@property (nonatomic, readonly, copy) NSString *pageIdentifier;

- (void).cxx_destruct;
- (id)author;
- (id)initWithPageIdentifier:(id)arg1 forAuthor:(id)arg2;
- (void)main;
- (id /* block */)outputBlock;
- (id)pageIdentifier;
- (void)setOutputBlock:(id /* block */)arg1;

@end
