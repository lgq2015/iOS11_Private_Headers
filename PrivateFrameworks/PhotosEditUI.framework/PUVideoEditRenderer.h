/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditRenderer : NSObject {
    id /* block */  __completionHandler;
    id /* block */  __progressHandler;
    <PUVideoEditRendererDelegate> * _delegate;
    struct { 
        bool respondsToStatusDidChange; 
    }  _delegateFlags;
    NSString * _exportPresetName;
    NSURL * _outputURL;
    PLPhotoEditRenderer * _photoEditRenderer;
    long long  _status;
}

@property (nonatomic, readonly, copy) id /* block */ _completionHandler;
@property (nonatomic, readonly, copy) id /* block */ _progressHandler;
@property (nonatomic) <PUVideoEditRendererDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *exportPresetName;
@property (nonatomic, readonly, copy) NSURL *outputURL;
@property (nonatomic, readonly, copy) PLPhotoEditRenderer *photoEditRenderer;
@property (setter=_setStatus:, nonatomic) long long status;

- (void).cxx_destruct;
- (id /* block */)_completionHandler;
- (void)_handleDidExport:(bool)arg1 error:(id)arg2;
- (id /* block */)_progressHandler;
- (void)_reportProgress;
- (void)_runCompletionHandlerWithError:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)cancelRendering;
- (void)dealloc;
- (id)delegate;
- (id)exportPresetName;
- (id)initWithPhotoEditRenderer:(id)arg1 outputURL:(id)arg2 exportPresetName:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)outputURL;
- (id)photoEditRenderer;
- (void)render;
- (void)setDelegate:(id)arg1;
- (long long)status;

@end
