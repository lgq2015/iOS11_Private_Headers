/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFColorConverter : NSObject <PFAVReaderWriterAdjustDelegate> {
    CIContext * _conversionContext;
    PFAVReaderWriter * _readerWriter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adjustPixelBuffer:(struct __CVBuffer { }*)arg1 toOutputBuffer:(struct __CVBuffer { }*)arg2;
- (void)convertWithVideoURL:(id)arg1 outURL:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;

@end