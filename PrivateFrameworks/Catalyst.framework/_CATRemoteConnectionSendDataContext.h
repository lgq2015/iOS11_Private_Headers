/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATRemoteConnectionSendDataContext : NSObject <_CATRemoteConnectionSendContext> {
    unsigned long long  _bytesWritten;
    NSData * _data;
    id  _userInfo;
    NSData * mEncodedData;
}

@property (nonatomic) unsigned long long bytesWritten;
@property (nonatomic, readonly) unsigned long long clientBytesWritten;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBytesRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (id)bufferedDataWithError:(id*)arg1;
- (unsigned long long)bytesWritten;
- (unsigned long long)clientBytesWritten;
- (id)data;
- (bool)hasBytesRemaining;
- (unsigned long long)headerLength;
- (id)initWithData:(id)arg1 userInfo:(id)arg2;
- (void)setBytesWritten:(unsigned long long)arg1;
- (id)userInfo;

@end
