/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDDevice : NSObject {
    bool  _defaultPaired;
    unsigned int  _identifier;
    bool  _isDefaultPaired;
    NSString * _modelIdentifier;
    CDSession * _session;
    int  remoteDataNotificationToken;
}

@property (readonly) unsigned int identifier;
@property bool isDefaultPaired;
@property (readonly) NSString *modelIdentifier;
@property (readonly) CDSession *session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 defaultPaired:(bool)arg4 error:(id*)arg5;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 error:(id*)arg4;
- (bool)isDefaultPaired;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (id)modelIdentifier;
- (id)readLogDataWithError:(id*)arg1;
- (id)readSystemDataWithError:(id*)arg1;
- (bool)requestLogDataWithError:(id*)arg1;
- (bool)requestSystemDataWithError:(id*)arg1;
- (id)session;
- (void)setIsDefaultPaired:(bool)arg1;
- (bool)setLogDataHandlerWithError:(id*)arg1 handler:(id /* block */)arg2;
- (bool)setSystemDataHandlerWithError:(id*)arg1 handler:(id /* block */)arg2;

@end
