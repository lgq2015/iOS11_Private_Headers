/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher> {
    NSXPCConnection * _connection;
    id /* block */  _insertionHandler;
    NSMutableDictionary * _removalHandlers;
    NSMutableArray * _tokenIDs;
}

@property (readonly) NSArray *tokenIDs;

- (void).cxx_destruct;
- (void)addRemovalHandler:(id /* block */)arg1 forTokenID:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithInsertionHandler:(id /* block */)arg1;
- (void)insertedToken:(id)arg1 reply:(id /* block */)arg2;
- (void)removedToken:(id)arg1 reply:(id /* block */)arg2;
- (void)setInsertionHandler:(id /* block */)arg1;
- (void)setup;
- (id)tokenIDs;

@end