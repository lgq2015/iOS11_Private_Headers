/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionIrisVideoExportSession : NSObject {
    unsigned long long  _bitrate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _crop;
    NSObject<OS_dispatch_queue> * _encodeQueue;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _exportQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    NSURL * _outputURL;
    long long  _status;
    AVAsset * _video;
}

@property (nonatomic, readonly) unsigned long long bitrate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } crop;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, readonly) NSURL *outputURL;
@property (nonatomic) long long status;
@property (nonatomic, readonly) AVAsset *video;

- (void).cxx_destruct;
- (id)_makeReader;
- (id)_makeWriter;
- (unsigned long long)bitrate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })crop;
- (id)error;
- (void)exportAsynchronouslyWithCompletion:(id /* block */)arg1;
- (id)initWithVideo:(id)arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 bitrate:(unsigned long long)arg4 outputURL:(id)arg5;
- (struct CGSize { double x1; double x2; })outputSize;
- (id)outputURL;
- (void)setError:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (id)video;

@end
