/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIURLSessionImageDownload : NSObject {
    UIColor * _backgroundFillColor;
    id  _client;
    NSMutableData * _downloadedData;
    bool  _finished;
    struct CGSize { 
        double width; 
        double height; 
    }  _fitToSize;
    bool  _hasSentFinished;
    struct CGImageSource { } * _imageSource;
    unsigned long long  _lastUpdatedLength;
    bool  _newDataAvailableToRender;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _renderTimer;
}

- (void).cxx_destruct;
- (void)_updateImageFromURL:(id)arg1 error:(id)arg2;
- (void)appendDownloadedData:(id)arg1 fromURL:(id)arg2;
- (void)dealloc;
- (void)finishedFromURL:(id)arg1 error:(id)arg2;
- (id)initWithFitToSize:(struct CGSize { double x1; double x2; })arg1 progressHandler:(id /* block */)arg2 incremental:(bool)arg3 client:(id)arg4 fillColor:(id)arg5;

@end
