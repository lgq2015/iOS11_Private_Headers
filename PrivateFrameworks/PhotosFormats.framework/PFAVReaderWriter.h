/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFAVReaderWriter : NSObject <PFRWSampleBufferChannelDelegate> {
    AVAsset * _asset;
    id /* block */  _completionBlock;
    <PFAVReaderWriterAdjustDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    AVAssetWriterInput * _metadataInput;
    NSURL * _outputURL;
    id /* block */  _progressBlock;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImagetime;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    bool  _writeInProgress;
    AVAssetReader * assetReader;
    AVAssetWriter * assetWriter;
    bool  cancelled;
    NSArray * passthroughChannels;
    NSArray * videoChannels;
}

@property (nonatomic, copy) AVAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PFAVReaderWriterAdjustDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVAssetWriterInput *metadataInput;
@property (nonatomic, copy) NSURL *outputURL;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (void).cxx_destruct;
- (void)_didLoadAVAssetValues;
- (id)asset;
- (void)cancel;
- (id)delegate;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)metadataInput;
- (id)outputURL;
- (void)readingAndWritingDidFinishSuccessfully:(bool)arg1 withError:(id)arg2;
- (void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 andMadeWriteSampleBuffer:(struct __CVBuffer { }*)arg3;
- (void)setAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetadataInput:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)setUpReaderAndWriterReturningError:(id*)arg1;
- (bool)startReadingAndWritingReturningError:(id*)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)writeToURL:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
