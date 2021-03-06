/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface CSIndexClientConnection : NSObject {
    NSString * _bundleID;
    unsigned int  _egid;
    unsigned int  _euid;
    bool  _internal;
    bool  _isExtension;
    int  _pid;
    NSString * _protectionClass;
    bool  _quotaDisabled;
    bool  _searchInternal;
    MDSearchableIndexService * _service;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int egid;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly) bool internal;
@property (nonatomic, readonly) bool isExtension;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *protectionClass;
@property (nonatomic, readonly) bool quotaDisabled;
@property (nonatomic, readonly) bool searchInternal;
@property (nonatomic, readonly) MDSearchableIndexService *service;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned int)egid;
- (unsigned int)euid;
- (id)initWithConnection:(id)arg1 indexer:(id)arg2;
- (bool)internal;
- (bool)isExtension;
- (int)pid;
- (id)protectionClass;
- (bool)quotaDisabled;
- (bool)searchInternal;
- (id)service;

@end
