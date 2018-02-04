/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFRWSampleBufferChannel : NSObject {
    AVAssetWriterInputPixelBufferAdaptor * _adaptor;
    AVAssetReaderOutput * _assetReaderOutput;
    AVAssetWriterInput * _assetWriterInput;
    bool  _finished;
    bool  _useAdaptor;
    id /* block */  completionHandler;
    NSObject<OS_dispatch_queue> * serializationQueue;
}

@property (nonatomic, retain) AVAssetWriterInputPixelBufferAdaptor *adaptor;
@property (nonatomic, retain) AVAssetReaderOutput *assetReaderOutput;
@property (nonatomic, retain) AVAssetWriterInput *assetWriterInput;
@property (nonatomic) bool finished;
@property (nonatomic) bool useAdaptor;

- (void).cxx_destruct;
- (id)adaptor;
- (id)assetReaderOutput;
- (id)assetWriterInput;
- (void)callCompletionHandlerIfNecessary;
- (void)cancel;
- (bool)finished;
- (id)init;
- (id)initWithAssetReaderOutput:(id)arg1 assetWriterInput:(id)arg2 useAdaptor:(bool)arg3;
- (void)setAdaptor:(id)arg1;
- (void)setAssetReaderOutput:(id)arg1;
- (void)setAssetWriterInput:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setUseAdaptor:(bool)arg1;
- (void)startWithDelegate:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)useAdaptor;

@end
