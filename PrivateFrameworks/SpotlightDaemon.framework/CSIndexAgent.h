/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface CSIndexAgent : CSXPCConnection {
    NSMutableDictionary * _indexConnections;
    <MDIndexer> * _indexer;
}

@property (nonatomic, retain) NSMutableDictionary *indexConnections;
@property (nonatomic, retain) <MDIndexer> *indexer;

+ (id)indexAgent;
+ (void)initialize;

- (void).cxx_destruct;
- (bool)allowClientConnection:(id)arg1;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (id)indexConnection:(id)arg1;
- (id)indexConnections;
- (id)indexer;
- (bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (void)setIndexConnections:(id)arg1;
- (void)setIndexer:(id)arg1;

@end
