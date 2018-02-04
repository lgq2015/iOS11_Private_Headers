/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest> {
    bool  _isUserRequested;
}

@property (nonatomic, readonly) bool isUserRequested;
@property (nonatomic, readonly) bool shouldSend;

- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(bool)arg3;
- (bool)isUserRequested;
- (bool)mf_alwaysReportFailures;
- (bool)shouldSend;

@end
