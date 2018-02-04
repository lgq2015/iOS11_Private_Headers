/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface CSSearchAgent : CSXPCConnection {
    <MDIndexer> * _indexer;
    NSMutableDictionary * _searchConnections;
}

@property (nonatomic, retain) <MDIndexer> *indexer;
@property (nonatomic, retain) NSMutableDictionary *searchConnections;

+ (void)initialize;
+ (id)searchAgent;

- (void).cxx_destruct;
- (bool)allowClientConnection:(id)arg1;
- (void)cancelQuery:(id)arg1;
- (void)cancelSimpleQuery:(id)arg1;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (void)handleEngagement:(id)arg1 forConnection:(id)arg2;
- (id)indexer;
- (bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (id)searchConnection:(id)arg1;
- (id)searchConnections;
- (void)setIndexer:(id)arg1;
- (void)setSearchConnections:(id)arg1;
- (void)startQuery:(id)arg1;
- (void)startSimpleQuery:(id)arg1;

@end
