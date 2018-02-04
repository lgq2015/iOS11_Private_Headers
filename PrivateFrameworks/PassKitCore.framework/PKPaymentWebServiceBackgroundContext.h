/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _backgroundTaskRecordsByTaskIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier;

+ (id)contextWithArchive:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned long long)arg2;
- (void)archiveAtPath:(id)arg1;
- (id)backgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (id)backgroundTaskRecordsByTaskIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (void)setBackgroundTaskRecordsByTaskIdentifier:(id)arg1;
- (id)taskIdentifiers;

@end
