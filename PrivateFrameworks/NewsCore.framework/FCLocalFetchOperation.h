/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCLocalFetchOperation : FCFetchOperation {
    <FCChannelProviding> * _channel;
    NSMutableArray * _headlines;
    NSArray * _paths;
}

@property (nonatomic, retain) <FCChannelProviding> *channel;
@property (nonatomic, readonly) NSMutableArray *headlines;
@property (nonatomic, readonly) NSArray *paths;

- (void).cxx_destruct;
- (id)channel;
- (void)convertPathsToHeadlines;
- (id)headlines;
- (id)initWithPaths:(id)arg1 andChannel:(id)arg2;
- (id)paths;
- (void)performOperation;
- (void)setChannel:(id)arg1;

@end
