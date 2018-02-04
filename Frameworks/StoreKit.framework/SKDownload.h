/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKDownload : NSObject {
    NSString * _contentIdentifier;
    long long  _contentLength;
    NSURL * _contentURL;
    NSNumber * _downloadID;
    long long  _downloadState;
    NSError * _error;
    float  _progress;
    double  _timeRemaining;
    SKPaymentTransaction * _transaction;
    NSString * _version;
}

@property (getter=_downloadID, setter=_setDownloadID:, nonatomic, copy) NSNumber *_downloadID;
@property (nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) long long contentLength;
@property (nonatomic, readonly) NSURL *contentURL;
@property (nonatomic, readonly) NSString *contentVersion;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) double timeRemaining;
@property (nonatomic, readonly) SKPaymentTransaction *transaction;

- (void)_applyChangeset:(id)arg1;
- (id)_downloadID;
- (void)_setContentIdentifier:(id)arg1;
- (void)_setContentLength:(long long)arg1;
- (void)_setContentURL:(id)arg1;
- (void)_setDownloadID:(id)arg1;
- (void)_setDownloadState:(long long)arg1;
- (void)_setError:(id)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setTimeRemaining:(double)arg1;
- (void)_setTransaction:(id)arg1;
- (void)_setVersion:(id)arg1;
- (id)contentIdentifier;
- (long long)contentLength;
- (id)contentURL;
- (id)contentVersion;
- (id)copyXPCEncoding;
- (void)dealloc;
- (long long)downloadState;
- (id)error;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (float)progress;
- (double)timeRemaining;
- (id)transaction;

@end
