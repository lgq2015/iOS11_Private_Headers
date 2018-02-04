/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject {
    bool  _didFinish;
    bool  _didStart;
    NSData * _finalData;
    NSError * _finalError;
    CPLResource * _finalResource;
    bool  _inMemoryRequest;
    float  _progress;
}

@property (nonatomic) bool didFinish;
@property (nonatomic) bool didStart;
@property (nonatomic, retain) NSData *finalData;
@property (nonatomic, retain) NSError *finalError;
@property (nonatomic, retain) CPLResource *finalResource;
@property (getter=isInMemoryRequest, nonatomic) bool inMemoryRequest;
@property (nonatomic) float progress;

- (void).cxx_destruct;
- (id)description;
- (bool)didFinish;
- (bool)didStart;
- (id)finalData;
- (id)finalError;
- (id)finalResource;
- (bool)isInMemoryRequest;
- (float)progress;
- (void)setDidFinish:(bool)arg1;
- (void)setDidStart:(bool)arg1;
- (void)setFinalData:(id)arg1;
- (void)setFinalError:(id)arg1;
- (void)setFinalResource:(id)arg1;
- (void)setInMemoryRequest:(bool)arg1;
- (void)setProgress:(float)arg1;

@end