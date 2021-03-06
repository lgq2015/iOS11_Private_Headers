/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSImageLoadOperation : VSAsyncOperation {
    VSAuditToken * _auditToken;
    NSItemProvider * _itemProvider;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredImageSize;
    VSOptional * _result;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredImageSize;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (void)_beginFetchingDataFromURL:(id)arg1;
- (void)_finishWithImageData:(id)arg1 orError:(id)arg2;
- (id)auditToken;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)initWithItemProvider:(id)arg1 preferredImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)itemProvider;
- (struct CGSize { double x1; double x2; })preferredImageSize;
- (id)result;
- (void)setAuditToken:(id)arg1;
- (void)setResult:(id)arg1;

@end
