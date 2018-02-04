/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIArtworkRequest : SKUIResourceRequest <NSCopying> {
    SSVURLDataConsumer * _dataConsumer;
    <SKUIArtworkRequestDelegate> * _delegate;
    NSString * _imageName;
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) SSVURLDataConsumer *dataConsumer;
@property (nonatomic) <SKUIArtworkRequestDelegate> *delegate;
@property (nonatomic, copy) NSString *imageName;

- (void).cxx_destruct;
- (id)URL;
- (bool)cachesInMemory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataConsumer;
- (id)delegate;
- (id)description;
- (void)finishWithResource:(id)arg1;
- (id)imageName;
- (id)newLoadOperation;
- (void)setDataConsumer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setURL:(id)arg1;

@end
