/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSPDocumentResourceCacheEntry : NSObject {
    NSURL * _URL;
    long long  _accessCount;
    NSDate * _contentAccessDate;
    NSString * _digestString;
    long long  _fileSize;
    bool  _wasDownloaded;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) long long accessCount;
@property (nonatomic, retain) NSDate *contentAccessDate;
@property (nonatomic, readonly) NSString *digestString;
@property (nonatomic) long long fileSize;
@property (nonatomic) bool wasDownloaded;

- (void).cxx_destruct;
- (id)URL;
- (long long)accessCount;
- (id)contentAccessDate;
- (id)digestString;
- (long long)fileSize;
- (id)init;
- (id)initWithDigestString:(id)arg1;
- (void)setAccessCount:(long long)arg1;
- (void)setContentAccessDate:(id)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setURL:(id)arg1;
- (void)setWasDownloaded:(bool)arg1;
- (bool)wasDownloaded;

@end
