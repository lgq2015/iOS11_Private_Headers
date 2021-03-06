/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPFileTransferInfo : NSObject {
    double  _bytesPerSecond;
    double  _compressionRate;
    NSString * _currentFilename;
    double  _remainingSeconds;
    long long  _totalByteCount;
    long long  _totalFileCount;
    NSUUID * _transferIdentifier;
    long long  _transferredByteCount;
    long long  _transferredFileCount;
}

@property (nonatomic, readonly) double bytesPerSecond;
@property (nonatomic, readonly) double compressionRate;
@property (nonatomic, readonly, copy) NSString *currentFilename;
@property (nonatomic, readonly) double remainingSeconds;
@property (nonatomic, readonly) long long totalByteCount;
@property (nonatomic, readonly) long long totalFileCount;
@property (nonatomic, readonly, copy) NSUUID *transferIdentifier;
@property (nonatomic, readonly) long long transferredByteCount;
@property (nonatomic, readonly) long long transferredFileCount;

- (void).cxx_destruct;
- (double)bytesPerSecond;
- (double)compressionRate;
- (id)currentFilename;
- (id)init;
- (double)remainingSeconds;
- (long long)totalByteCount;
- (long long)totalFileCount;
- (id)transferIdentifier;
- (long long)transferredByteCount;
- (long long)transferredFileCount;

@end
